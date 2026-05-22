/*
 * XREFs of ?CreateCursor@MobileCursorBroker@@UEAAJPEAUDeviceInfo@@PEAUIInputDisplay@@KPEAPEAUICursor@@@Z @ 0x180025DC0
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?GetValueForKey@?$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@PEAPEAVDWMCursor@@@Z @ 0x18001ED5C (-GetValueForKey@-$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@PEAPEAVDWMCur.c)
 *     ?SetValueForKey@?$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@AEBQEAVDWMCursor@@@Z @ 0x18001EDE4 (-SetValueForKey@-$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@AEBQEAVDWMCur.c)
 *     ?Create@MobileCursor@@SAJPEAVMobileCursorBroker@@PEAUIInputDisplay@@UCursorId@@W4InputType@@PEAPEAV1@@Z @ 0x180026DC0 (-Create@MobileCursor@@SAJPEAVMobileCursorBroker@@PEAUIInputDisplay@@UCursorId@@W4InputType@@PEAP.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MobileCursorBroker::CreateCursor(
        MobileCursorBroker *this,
        struct DeviceInfo *a2,
        struct IInputDisplay *a3,
        __int64 a4,
        struct ICursor **a5)
{
  struct ICursor **v5; // r14
  __int64 v7; // r9
  _DWORD *v8; // rdi
  unsigned int v9; // ecx
  _DWORD *v10; // rax
  int ValueForKey; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  int v14; // r9d
  struct ICursor *v15; // rdi
  __int64 v16; // r9
  unsigned __int64 v18; // [rsp+30h] [rbp-20h] BYREF
  __int64 v19; // [rsp+38h] [rbp-18h]
  __int128 v20; // [rsp+40h] [rbp-10h] BYREF
  struct ICursor *v21; // [rsp+78h] [rbp+28h] BYREF

  v5 = a5;
  v21 = 0LL;
  *a5 = 0LL;
  v7 = *((unsigned int *)a2 + 1);
  if ( (v7 & 2) == 0 )
  {
    LODWORD(v18) = *((_DWORD *)this + 336);
    *((_DWORD *)this + 336) = v18 + 1;
    v16 = *((unsigned int *)a2 + 1);
    v19 = 0LL;
    v20 = v18;
    ValueForKey = MobileCursor::Create(this, a3, &v20, v16, &v21);
    v13 = ValueForKey;
    if ( ValueForKey < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v13;
      v14 = 212;
      goto LABEL_12;
    }
    ValueForKey = FixedSizeMap<CursorId,DWMCursor *,50>::SetValueForKey((__int64)this + 96, (int *)&v18, &v21);
    v13 = ValueForKey;
    if ( ValueForKey < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v13;
      v14 = 213;
      goto LABEL_12;
    }
    goto LABEL_23;
  }
  v8 = (_DWORD *)((char *)this + 96);
  LODWORD(v18) = 1;
  v19 = 0LL;
  if ( *((_DWORD *)this + 324) != 1 )
  {
    v9 = 0;
    v10 = v8;
    while ( *v10 != 1 )
    {
      ++v9;
      v10 += 6;
      if ( v9 >= 0x32 )
        goto LABEL_6;
    }
    ValueForKey = FixedSizeMap<CursorId,DWMCursor *,50>::GetValueForKey(v8, (unsigned int *)&v18, &v21);
    v13 = ValueForKey;
    if ( ValueForKey < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v14 = 189;
        goto LABEL_12;
      }
      return v13;
    }
    v15 = v21;
    (*(void (__fastcall **)(struct ICursor *))(*(_QWORD *)v21 + 8LL))(v21);
LABEL_24:
    *v5 = v15;
    return v13;
  }
LABEL_6:
  v20 = v18;
  ValueForKey = MobileCursor::Create(this, a3, &v20, v7, &v21);
  v13 = ValueForKey;
  if ( ValueForKey >= 0 )
  {
    ValueForKey = FixedSizeMap<CursorId,DWMCursor *,50>::SetValueForKey((__int64)v8, (int *)&v18, &v21);
    v13 = ValueForKey;
    if ( ValueForKey < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v13;
      v14 = 200;
      goto LABEL_12;
    }
LABEL_23:
    v15 = v21;
    goto LABEL_24;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v14 = 199;
LABEL_12:
    Template_qqq(v12, &MinInput_Warning_CheckResult, 0, v14, ValueForKey);
  }
  return v13;
}
