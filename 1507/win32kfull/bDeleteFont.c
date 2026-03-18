/*
 * XREFs of bDeleteFont @ 0x1C00D7900
 * Callers:
 *     vCleanupFonts @ 0x1C00D78B0 (vCleanupFonts.c)
 *     ?FinishStockFontInitInternal@@YAXPEBGH@Z @ 0x1C013DA84 (-FinishStockFontInitInternal@@YAXPEBGH@Z.c)
 * Callees:
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C00D7B54 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C00D7BFC (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 */

__int64 __fastcall bDeleteFont(struct HOBJ__ *a1, unsigned int a2, unsigned __int8 a3)
{
  unsigned int v5; // edi
  int v6; // esi
  int v7; // ebp
  _BYTE *v8; // rbx
  __int64 v9; // rax
  _BYTE *v11; // [rsp+30h] [rbp-38h] BYREF
  int v12; // [rsp+38h] [rbp-30h]
  unsigned int v13; // [rsp+3Ch] [rbp-2Ch]
  unsigned int v14; // [rsp+44h] [rbp-24h]

  v12 = 0;
  v11 = 0LL;
  v14 = 0;
  v5 = 1;
  v6 = 1;
  HANDLELOCK::bLockHobj((HANDLELOCK *)&v11, a1, a3);
  v7 = v12;
  v8 = v11;
  if ( v12 && v11 )
  {
    if ( *(_DWORD *)(*(_QWORD *)v11 + 8LL) )
    {
      v11[15] |= 2u;
      v6 = 0;
    }
    *((_QWORD *)v8 + 2) = 0LL;
    HANDLELOCK::vUnlock((HANDLELOCK *)&v11);
    v7 = v12;
    v8 = v11;
  }
  else
  {
    v5 = 0;
    v6 = 0;
  }
  if ( v6 )
  {
    v9 = HmgRemoveObject(a1, 0LL, 0LL, a2, 10, 0LL);
    if ( v9 )
    {
      FreeObject(v9, 10LL);
      v5 = 1;
    }
    else
    {
      v5 = 0;
    }
  }
  if ( v7 )
  {
    if ( v8 )
    {
      if ( (v8[15] & 0x40) != 0 )
      {
        GreReleasePushLockExclusive((char *)gpentPushLock + 8 * v14);
      }
      else
      {
        _m_prefetchw(v8 + 8);
        v13 = *((_DWORD *)v8 + 2) & 0xFFFFFFFE;
        _InterlockedExchange((volatile __int32 *)v8 + 2, v13);
      }
    }
    KeLeaveCriticalRegion();
  }
  return v5;
}
