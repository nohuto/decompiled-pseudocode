/*
 * XREFs of ?SetSuppressionState@MobileCursorBroker@@UEAAJ_NPEAUHMONITOR__@@@Z @ 0x1800261F0
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?GetValueForKey@?$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@PEAPEAVDWMCursor@@@Z @ 0x18001ED5C (-GetValueForKey@-$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@PEAPEAVDWMCur.c)
 *     ?ShowCursor@MobileCursorBroker@@IEAAXPEAVMobileCursor@@_N@Z @ 0x180026690 (-ShowCursor@MobileCursorBroker@@IEAAXPEAVMobileCursor@@_N@Z.c)
 *     ?GetHMonitor@MobileCursor@@QEAAPEAUHMONITOR__@@XZ @ 0x180026EC8 (-GetHMonitor@MobileCursor@@QEAAPEAUHMONITOR__@@XZ.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MobileCursorBroker::SetSuppressionState(MobileCursorBroker *this, char a2, HMONITOR a3)
{
  unsigned int v5; // edi
  _DWORD *v6; // rcx
  int v7; // edx
  _DWORD *i; // rax
  int ValueForKey; // eax
  __int64 v10; // rcx
  MobileCursor *v11; // rbx
  char *v12; // r8
  unsigned int v13; // edx
  int v14; // r10d
  __int64 v15; // r9
  __int64 v16; // rcx
  MobileCursor **v17; // rsi
  __int64 v18; // r14
  MobileCursor *v19; // rbp
  MobileCursor *v21; // [rsp+30h] [rbp-1D8h] BYREF
  unsigned int v22; // [rsp+38h] [rbp-1D0h] BYREF
  __int64 v23; // [rsp+40h] [rbp-1C8h]
  _QWORD v24[50]; // [rsp+50h] [rbp-1B8h] BYREF

  v5 = 0;
  if ( a2 )
  {
    v22 = 1;
    v6 = (_DWORD *)((char *)this + 96);
    v23 = 0LL;
    if ( v6[300] != 1 )
    {
      v7 = 0;
      for ( i = v6; *i != 1; i += 6 )
      {
        if ( (unsigned int)++v7 >= 0x32 )
          return v5;
      }
      v21 = 0LL;
      ValueForKey = FixedSizeMap<CursorId,DWMCursor *,50>::GetValueForKey(v6, &v22, &v21);
      v5 = ValueForKey;
      if ( ValueForKey >= 0 )
      {
        v11 = v21;
        if ( v21
          && ((*(__int64 (__fastcall **)(MobileCursor *))(*(_QWORD *)v21 + 48LL))(v21) & 2) != 0
          && (!a3 || MobileCursor::GetHMonitor(v11) == a3) )
        {
          if ( *(_QWORD *)((*(__int64 (__fastcall **)(MobileCursor *, unsigned int *))(*(_QWORD *)v11 + 40LL))(
                             v11,
                             &v22)
                         + 8) )
          {
            *((_DWORD *)v11 + 16) = 2;
            if ( *((_BYTE *)v11 + 56) )
              MobileCursorBroker::ShowCursor(this, v11, 0);
          }
        }
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        Template_qqq(v10, &MinInput_Warning_CheckResult, 0, 295, ValueForKey);
      }
    }
  }
  else
  {
    v12 = (char *)this + 96;
    v13 = 0;
    v14 = *((_DWORD *)this + 324);
    v15 = 50LL;
    do
    {
      if ( *(_DWORD *)v12 != v14 )
      {
        v16 = v13++;
        v24[v16] = *((_QWORD *)v12 + 2);
      }
      v12 += 24;
      --v15;
    }
    while ( v15 );
    if ( v13 )
    {
      v17 = (MobileCursor **)v24;
      v18 = v13;
      do
      {
        v19 = *v17;
        if ( *((_DWORD *)*v17 + 16) == 2 && MobileCursor::GetHMonitor(*v17) == a3 )
          *((_DWORD *)v19 + 16) = 1;
        ++v17;
        --v18;
      }
      while ( v18 );
    }
  }
  return v5;
}
