/*
 * XREFs of GreIntersectClipRect @ 0x1C0014D20
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C005E4F0 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C00158B0 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C0015A18 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C002C950 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C002DC70 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C0031910 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0031A10 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C0031DD0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     EngSetLastError @ 0x1C0076470 (EngSetLastError.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00B6550 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 */

__int64 __fastcall GreIntersectClipRect(int a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  int v5; // edi
  DC *v6; // rbx
  __int16 v9; // r14d^2
  struct _ENTRY *v11; // rsi
  __int64 v12; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v14; // ax
  unsigned int v15; // eax
  ULONG v16; // ecx
  _DWORD *v18; // rcx
  bool v19; // zf
  char *v20; // rax
  int v21; // eax
  DC *v22[2]; // [rsp+38h] [rbp-31h] BYREF
  char *v23; // [rsp+48h] [rbp-21h] BYREF
  int v24; // [rsp+50h] [rbp-19h]
  int v25; // [rsp+54h] [rbp-15h]
  __int64 v26; // [rsp+58h] [rbp-11h] BYREF
  int v27; // [rsp+60h] [rbp-9h]
  unsigned int v28; // [rsp+64h] [rbp-5h]
  unsigned int v29; // [rsp+6Ch] [rbp+3h]
  struct _RECTL v30; // [rsp+70h] [rbp+7h] BYREF

  v5 = 0;
  v6 = 0LL;
  v9 = HIWORD(a1);
  v22[1] = 0LL;
  if ( (unsigned __int16)a1 < (unsigned int)gcMaxHmgr )
  {
    v11 = (struct _ENTRY *)((char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)a1);
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v26, v11, 1, (unsigned __int16)a1, 0);
    if ( v27 )
    {
      v12 = v26;
      if ( v26 )
      {
        if ( *((_BYTE *)v11 + 14) == 1 && *((_WORD *)v11 + 6) == v9 )
        {
          CurrentThread = KeGetCurrentThread();
          v6 = *(DC **)v11;
          v14 = *(_WORD *)(*(_QWORD *)v11 + 12LL);
          if ( !v14 || *((struct _KTHREAD **)v6 + 2) == CurrentThread )
          {
            *((_QWORD *)v6 + 2) = CurrentThread;
            *((_WORD *)v6 + 6) = v14 + 1;
          }
          else
          {
            v6 = 0LL;
          }
          v12 = v26;
        }
        if ( (*(_BYTE *)(v12 + 15) & 0x40) != 0 )
        {
          ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v29);
        }
        else
        {
          v15 = *(_DWORD *)(v12 + 8) & 0xFFFFFFFE;
          _m_prefetchw((const void *)(v12 + 8));
          v28 = v15;
          _InterlockedExchange((volatile __int32 *)(v12 + 8), v15);
        }
      }
      KeLeaveCriticalRegion();
    }
  }
  v22[0] = v6;
  if ( !v6 )
    goto LABEL_18;
  if ( !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)v22) )
  {
    v6 = 0LL;
    _InterlockedDecrement((volatile signed __int32 *)v22[0] + 3);
    v22[0] = 0LL;
LABEL_18:
    v16 = 6;
LABEL_19:
    EngSetLastError(v16);
    goto LABEL_20;
  }
  v6 = v22[0];
  if ( !v22[0] )
    goto LABEL_18;
  v18 = (_DWORD *)*((_QWORD *)v22[0] + 10);
  v24 = v18[17];
  v19 = (v18[88] & 0xE000) == 0;
  v25 = v18[78] & 1;
  if ( v19 )
  {
    v20 = (char *)v22[0] + 336;
    v23 = (char *)v22[0] + 336;
  }
  else
  {
    EXFORMOBJ::vInit((EXFORMOBJ *)&v23, (struct XDCOBJ *)v22, 0x204u, 0);
    v20 = v23;
  }
  v21 = *((_DWORD *)v20 + 8);
  v30.left = a2;
  v30.top = a3;
  v30.right = a4;
  v30.bottom = a5;
  if ( (v21 & 1) != 0 )
  {
    EXFORMOBJ::bXform((EXFORMOBJ *)&v23, (struct ERECTL *)&v30);
    ERECTL::vOrder((ERECTL *)&v30);
    v5 = DC::iCombine(v6, &v30, 1);
    if ( v5 > 1 )
      v5 = 3;
  }
  else
  {
    if ( (((a2 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
      || (((a5 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
      || (((a4 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
      || (((a3 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
    {
      v16 = 87;
      goto LABEL_19;
    }
    v5 = DC::iCombine(v6, (struct EXFORMOBJ *)&v23, &v30, 1);
    if ( v5 > 1 )
      v5 = 3;
  }
LABEL_20:
  if ( v6 )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)v22);
    _InterlockedDecrement((volatile signed __int32 *)v22[0] + 3);
  }
  return (unsigned int)v5;
}
