/*
 * XREFs of ??1DWMCursor@@MEAA@XZ @ 0x18001F194
 * Callers:
 *     ??_EDWMCursor@@MEAAPEAXI@Z @ 0x18001F134 (--_EDWMCursor@@MEAAPEAXI@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ??1CommandRegistrationToken@TestCommandHost@@QEAA@XZ @ 0x180009A80 (--1CommandRegistrationToken@TestCommandHost@@QEAA@XZ.c)
 *     ?SendAndVerifyEndpoints@DWMCursorBroker@@AEAAJPEAUCursorMessage@@@Z @ 0x18001E5F8 (-SendAndVerifyEndpoints@DWMCursorBroker@@AEAAJPEAUCursorMessage@@@Z.c)
 *     ?SetValueForKey@?$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@AEBQEAVDWMCursor@@@Z @ 0x18001EDE4 (-SetValueForKey@-$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@AEBQEAVDWMCur.c)
 *     ?GetID@DWMCursor@@UEAA?AUCursorId@@XZ @ 0x18001EF00 (-GetID@DWMCursor@@UEAA-AUCursorId@@XZ.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall DWMCursor::~DWMCursor(DWMCursor *this)
{
  __int64 v2; // rsi
  int v3; // eax
  __int64 v4; // rcx
  int v5; // r9d
  __int64 v6; // rax
  _DWORD *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  char *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  _QWORD v16[3]; // [rsp+30h] [rbp-88h] BYREF
  int v17[6]; // [rsp+48h] [rbp-70h] BYREF
  char v18[8]; // [rsp+60h] [rbp-58h] BYREF
  __int128 v19; // [rsp+68h] [rbp-50h]

  v16[1] = -2LL;
  v16[2] = this;
  *(_QWORD *)this = &DWMCursor::`vftable'{for `ICursor3D'};
  *((_QWORD *)this + 1) = &DWMCursor::`vftable'{for `IGetClosestInteractiveBounds'};
  *((_QWORD *)this + 2) = &DWMCursor::`vftable'{for `RefCountedObject'};
  v2 = *((_QWORD *)this + 4);
  DWMCursor::GetID((__int64)this, v17);
  v18[0] = 1;
  v19 = *(_OWORD *)v17;
  v16[0] = 0LL;
  v3 = FixedSizeMap<CursorId,DWMCursor *,50>::SetValueForKey(v2 + 56, v17, v16);
  if ( v3 >= 0 )
  {
    v6 = 0LL;
    v7 = (_DWORD *)(v2 + 56);
    while ( *v7 != v17[0] )
    {
      v6 = (unsigned int)(v6 + 1);
      v7 += 6;
      if ( (unsigned int)v6 >= 0x32 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          Template_qqq((__int64)v7, &MinInput_Warning_CheckResult, 0, 193, 5);
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            Template_qqq(v8, &MinInput_Warning_CheckResult, 0, 511, 5);
        }
        goto LABEL_14;
      }
    }
    *(_OWORD *)(v2 + 24 * v6 + 56) = *(_OWORD *)(v2 + 1256);
    v3 = DWMCursorBroker::SendAndVerifyEndpoints((DWMCursorBroker *)v2, (struct CursorMessage *)v18);
    if ( v3 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v5 = 513;
      goto LABEL_13;
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v5 = 510;
LABEL_13:
    Template_qqq(v4, &MinInput_Warning_CheckResult, 0, v5, v3);
  }
LABEL_14:
  v9 = *((_QWORD *)this + 6);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  *((_QWORD *)this + 6) = 0LL;
  TestCommandHost::CommandRegistrationToken::~CommandRegistrationToken((DWMCursor *)((char *)this + 144));
  v10 = (char *)*((_QWORD *)this + 12);
  if ( (unsigned __int64)(v10 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v10);
  v11 = *((_QWORD *)this + 11);
  *((_QWORD *)this + 11) = 0LL;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v12 = *((_QWORD *)this + 10);
  if ( v12 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = *((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v14 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = 0LL;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  v15 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = 0LL;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
}
