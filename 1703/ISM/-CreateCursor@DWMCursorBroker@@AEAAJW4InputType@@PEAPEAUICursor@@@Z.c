/*
 * XREFs of ?CreateCursor@DWMCursorBroker@@AEAAJW4InputType@@PEAPEAUICursor@@@Z @ 0x18001E934
 * Callers:
 *     ?CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@PEAUIInputDisplay@@KPEAPEAUICursor@@@Z @ 0x18001E820 (-CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@PEAUIInputDisplay@@KPEAPEAUICursor@@@Z.c)
 *     ?GetDefaultCursor@DWMCursorBroker@@UEAAJPEAPEAUICursor@@@Z @ 0x18001EBF0 (-GetDefaultCursor@DWMCursorBroker@@UEAAJPEAPEAUICursor@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?DuplicateHandleAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z @ 0x18001E69C (-DuplicateHandleAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z.c)
 *     ?GetValueForKey@?$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@PEAPEAVDWMCursor@@@Z @ 0x18001ED5C (-GetValueForKey@-$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@PEAPEAVDWMCur.c)
 *     ?SetValueForKey@?$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@AEBQEAVDWMCursor@@@Z @ 0x18001EDE4 (-SetValueForKey@-$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@AEBQEAVDWMCur.c)
 *     ?Create@DWMCursor@@KAJPEAVDWMCursorBroker@@UCursorId@@W4InputType@@_NV?$ComPtr@UIDCompositionDevice@@@WRL@Microsoft@@PEAPEAV1@@Z @ 0x18001F5CC (-Create@DWMCursor@@KAJPEAVDWMCursorBroker@@UCursorId@@W4InputType@@_NV-$ComPtr@UIDCompositionDev.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMCursorBroker::CreateCursor(__int64 a1, int a2, struct DWMCursor **a3, int a4)
{
  unsigned int v7; // ebx
  _DWORD *v8; // rsi
  int v9; // edx
  unsigned int v10; // ecx
  _DWORD *v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int ValueForKey; // eax
  __int64 v16; // rcx
  struct DWMCursor *v17; // rsi
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  _DWORD *v26; // r12
  unsigned int v27; // r15d
  int v28; // eax
  __int64 v29; // rcx
  __m128i v30; // [rsp+30h] [rbp-30h] BYREF
  __m128i v31; // [rsp+40h] [rbp-20h] BYREF
  struct DWMCursor *v32; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v33; // [rsp+A8h] [rbp+48h] BYREF

  *a3 = 0LL;
  v32 = 0LL;
  if ( (a2 & 8) != 0 )
  {
    v7 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(a1, &MinInput_Warning_CheckResult, 0, 446, 87);
    return v7;
  }
  if ( (a2 & 2) == 0 )
  {
    v30.m128i_i32[0] = *(_DWORD *)(a1 + 1400);
    *(_DWORD *)(a1 + 1400) = v30.m128i_i32[0] + 1;
    v21 = *(_QWORD *)(a1 + 48);
    v30.m128i_i64[1] = 0LL;
    v33 = v21;
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
    v31 = (__m128i)v30.m128i_u64[0];
    v22 = DWMCursor::Create(a1, (unsigned int)&v31, a2, a4, (unsigned int)&v33, (__int64)&v32);
    v7 = v22;
    if ( v22 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v23, &MinInput_Warning_CheckResult, 0, 477, v22);
      return v7;
    }
    v24 = FixedSizeMap<CursorId,DWMCursor *,50>::SetValueForKey(a1 + 56, &v30, &v32);
    v7 = v24;
    if ( v24 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v25, &MinInput_Warning_CheckResult, 0, 478, v24);
      return v7;
    }
    goto LABEL_34;
  }
  v30.m128i_i32[0] = 2;
  v30.m128i_i64[1] = 0LL;
  if ( (a2 & 0x40) == 0 )
    v30.m128i_i32[0] = 1;
  v8 = (_DWORD *)(a1 + 56);
  v9 = _mm_cvtsi128_si32(v30);
  if ( v9 == *(_DWORD *)(a1 + 1256) )
  {
LABEL_12:
    v12 = *(_QWORD *)(a1 + 48);
    v33 = v12;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    v31 = v30;
    v13 = DWMCursor::Create(a1, (unsigned int)&v31, a2, a4, (unsigned int)&v33, (__int64)&v32);
    v7 = v13;
    if ( v13 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v14, &MinInput_Warning_CheckResult, 0, 470, v13);
      return v7;
    }
    v19 = FixedSizeMap<CursorId,DWMCursor *,50>::SetValueForKey(v8, &v30, &v32);
    v7 = v19;
    if ( v19 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v20, &MinInput_Warning_CheckResult, 0, 471, v19);
      return v7;
    }
LABEL_34:
    v17 = v32;
    v26 = (_DWORD *)(a1 + 1316);
    v27 = 0;
    while ( 1 )
    {
      if ( *v26 )
      {
        v28 = DWMCursorBroker::DuplicateHandleAndVerifySend((DWMCursorBroker *)a1, v17, v27);
        v7 = v28;
        if ( v28 < 0 )
          break;
      }
      ++v27;
      v26 += 2;
      if ( v27 >= 0xA )
        goto LABEL_21;
    }
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v29, &MinInput_Warning_CheckResult, 0, 487, v28);
    return v7;
  }
  v10 = 0;
  v11 = v8;
  while ( *v11 != v9 )
  {
    ++v10;
    v11 += 6;
    if ( v10 >= 0x32 )
      goto LABEL_12;
  }
  ValueForKey = FixedSizeMap<CursorId,DWMCursor *,50>::GetValueForKey(v8, &v30, &v32);
  v7 = ValueForKey;
  if ( ValueForKey >= 0 )
  {
    v17 = v32;
    (*(void (__fastcall **)(struct DWMCursor *))(*(_QWORD *)v32 + 8LL))(v32);
LABEL_21:
    *a3 = v17;
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    Template_qqq(v16, &MinInput_Warning_CheckResult, 0, 464, ValueForKey);
  }
  return v7;
}
