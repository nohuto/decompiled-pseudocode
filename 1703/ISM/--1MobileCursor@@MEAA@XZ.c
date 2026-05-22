/*
 * XREFs of ??1MobileCursor@@MEAA@XZ @ 0x180026BA4
 * Callers:
 *     ??_GMobileCursor@@MEAAPEAXI@Z @ 0x180026B60 (--_GMobileCursor@@MEAAPEAXI@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?SetValueForKey@?$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@AEBQEAVDWMCursor@@@Z @ 0x18001EDE4 (-SetValueForKey@-$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@AEBQEAVDWMCur.c)
 *     ?ShowCursor@MobileCursorBroker@@IEAAXPEAVMobileCursor@@_N@Z @ 0x180026690 (-ShowCursor@MobileCursorBroker@@IEAAXPEAVMobileCursor@@_N@Z.c)
 *     ?GetID@MobileCursor@@UEAA?AUCursorId@@XZ @ 0x1800269D0 (-GetID@MobileCursor@@UEAA-AUCursorId@@XZ.c)
 *     ?GetHMonitor@MobileCursor@@QEAAPEAUHMONITOR__@@XZ @ 0x180026EC8 (-GetHMonitor@MobileCursor@@QEAAPEAUHMONITOR__@@XZ.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall MobileCursor::~MobileCursor(MobileCursor *this)
{
  _DWORD *v2; // r15
  HMONITOR HMonitor; // r12
  __int64 v4; // rsi
  int v5; // r9d
  _DWORD *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdi
  MobileCursor *v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  _DWORD *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  _QWORD v18[3]; // [rsp+30h] [rbp-1E8h] BYREF
  __int128 v19; // [rsp+48h] [rbp-1D0h] BYREF
  MobileCursor *v20[50]; // [rsp+60h] [rbp-1B8h]

  v18[1] = -2LL;
  v18[2] = this;
  *(_QWORD *)this = &MobileCursor::`vftable'{for `ICursor'};
  *((_QWORD *)this + 1) = &MobileCursor::`vftable'{for `RefCountedObject'};
  v2 = (_DWORD *)*((_QWORD *)this + 3);
  MobileCursor::GetID((__int64)this, &v19);
  HMonitor = MobileCursor::GetHMonitor(this);
  v4 = 0LL;
  v5 = v2[324];
  v6 = v2 + 24;
  v7 = 50LL;
  do
  {
    if ( *v6 != v5 )
    {
      v20[v4] = (MobileCursor *)*((_QWORD *)v6 + 2);
      v4 = (unsigned int)(v4 + 1);
    }
    v6 += 6;
    --v7;
  }
  while ( v7 );
  v8 = 0LL;
  if ( (_DWORD)v4 )
  {
    while ( 1 )
    {
      v9 = v20[v8];
      if ( v9 != this && *((_BYTE *)v9 + 56) && MobileCursor::GetHMonitor(v9) == HMonitor )
        break;
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= (unsigned int)v4 )
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    MobileCursorBroker::ShowCursor((MobileCursorBroker *)v2, this, 0);
  }
  v18[0] = 0LL;
  v10 = FixedSizeMap<CursorId,DWMCursor *,50>::SetValueForKey((__int64)(v2 + 24), (int *)&v19, v18);
  if ( v10 >= 0 )
  {
    v12 = 0LL;
    v13 = v2 + 24;
    do
    {
      if ( *v13 == (_DWORD)v19 )
      {
        *(_OWORD *)&v2[6 * v12 + 24] = *((_OWORD *)v2 + 81);
        goto LABEL_22;
      }
      v12 = (unsigned int)(v12 + 1);
      v13 += 6;
    }
    while ( (unsigned int)v12 < 0x32 );
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      Template_qqq((__int64)v13, &MinInput_Warning_CheckResult, 0, 193, 5);
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v14, &MinInput_Warning_CheckResult, 0, 412, 5);
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    Template_qqq(v11, &MinInput_Warning_CheckResult, 0, 411, v10);
  }
LABEL_22:
  v15 = *((_QWORD *)this + 3);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  *((_QWORD *)this + 3) = 0LL;
  LODWORD(v19) = 0;
  *((_QWORD *)&v19 + 1) = 0LL;
  *(_OWORD *)((char *)this + 40) = (unsigned __int64)v19;
  v16 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = 0LL;
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  v17 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = 0LL;
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
}
