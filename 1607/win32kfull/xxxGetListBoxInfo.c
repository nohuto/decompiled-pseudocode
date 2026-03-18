/*
 * XREFs of xxxGetListBoxInfo @ 0x1C0233CE4
 * Callers:
 *     NtUserGetListBoxInfo @ 0x1C0213ED0 (NtUserGetListBoxInfo.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 */

__int64 __fastcall xxxGetListBoxInfo(struct tagWND *a1, __int64 a2)
{
  struct tagWND *v2; // r10
  unsigned int v3; // ebx
  struct tagWND *v4; // rsi
  PRKPROCESS *v5; // r14
  __int64 v6; // rcx
  int v7; // edi
  _DWORD *v8; // rsi

  v2 = a1;
  v3 = 0;
  if ( !a1 )
    goto LABEL_19;
  if ( (*((_WORD *)a1 + 33) & 0x3FFF) == 0x2A6 )
  {
    v4 = a1;
  }
  else
  {
    a1 = (struct tagWND *)gpsi;
    a2 = *((_QWORD *)v2 + 19);
    v4 = 0LL;
    if ( *(_WORD *)(a2 + 8) == *(_WORD *)(gpsi + 858LL) )
      v4 = v2;
  }
  if ( v4 )
  {
    v5 = *(PRKPROCESS **)(*((_QWORD *)v2 + 2) + 376LL);
    if ( v5 == (PRKPROCESS *)PsGetCurrentProcessWin32Process(a1, a2) )
    {
      v7 = 0;
    }
    else
    {
      v7 = 1;
      KeAttachProcess(*v5);
    }
    v8 = (_DWORD *)*((_QWORD *)v4 + 45);
    if ( v8 )
    {
      if ( ((PsGetCurrentProcessWow64Process(v6) != 0 ? 0 : 3) & (unsigned int)v8) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (v8[23] & 0x40000) != 0 )
        v3 = v8[19];
      else
        v3 = v8[8];
    }
    if ( v7 )
      KeDetachProcess();
    return v3;
  }
  else
  {
LABEL_19:
    _InterlockedAdd(&glSendMessage, 1u);
    return xxxSendTransformableMessageTimeout(v2, 434LL, 0LL, 0LL, 0, 0, 0LL, 1, 1);
  }
}
