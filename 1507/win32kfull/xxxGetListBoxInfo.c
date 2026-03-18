/*
 * XREFs of xxxGetListBoxInfo @ 0x1C023C174
 * Callers:
 *     NtUserGetListBoxInfo @ 0x1C021B280 (NtUserGetListBoxInfo.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0069380 (xxxSendTransformableMessageTimeout.c)
 */

__int64 __fastcall xxxGetListBoxInfo(__int64 a1)
{
  __int64 v1; // r10
  unsigned int v2; // ebx
  __int64 v3; // rsi
  PRKPROCESS *v4; // r14
  __int64 v5; // rcx
  int v6; // edi
  _DWORD *v7; // rsi

  v1 = a1;
  v2 = 0;
  if ( !a1 )
    goto LABEL_19;
  if ( (*(_WORD *)(a1 + 66) & 0x3FFF) == 0x2A6 )
  {
    v3 = a1;
  }
  else
  {
    a1 = gpsi;
    v3 = 0LL;
    if ( *(_WORD *)(*(_QWORD *)(v1 + 152) + 8LL) == *(_WORD *)(gpsi + 858LL) )
      v3 = v1;
  }
  if ( v3 )
  {
    v4 = *(PRKPROCESS **)(*(_QWORD *)(v1 + 16) + 384LL);
    if ( v4 == (PRKPROCESS *)PsGetCurrentProcessWin32Process(a1) )
    {
      v6 = 0;
    }
    else
    {
      v6 = 1;
      KeAttachProcess(*v4);
    }
    v7 = *(_DWORD **)(v3 + 376);
    if ( v7 )
    {
      if ( ((PsGetCurrentProcessWow64Process(v5) != 0 ? 0 : 3) & (unsigned int)v7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (v7[23] & 0x40000) != 0 )
        v2 = v7[19];
      else
        v2 = v7[8];
    }
    if ( v6 )
      KeDetachProcess();
    return v2;
  }
  else
  {
LABEL_19:
    _InterlockedAdd(&glSendMessage, 1u);
    return xxxSendTransformableMessageTimeout((struct tagWND *)v1, 0x1B2u, 0LL, 0LL, 0, 0, 0LL, 1, 1);
  }
}
