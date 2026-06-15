/*
 * XREFs of ?Init@CDuckingNotification@@QEAAJKPEBG_K@Z @ 0x180006924
 * Callers:
 *     ?AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z @ 0x180006B80 (-AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z.c)
 *     ?DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z @ 0x180006E00 (-DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ??4?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV01@PEBG@Z @ 0x1800094F4 (--4-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV01@PEBG@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDuckingNotification::Init(
        CDuckingNotification *this,
        int a2,
        const unsigned __int16 *a3,
        __int64 a4)
{
  HANDLE ProcessHeap; // rax
  _DWORD *v7; // rax
  const GUID *v8; // r8
  const GUID *v9; // r9
  _DWORD *v10; // rdi
  __int64 v11; // rcx
  __int64 result; // rax
  const struct _TlgProvider_t *v13; // rcx
  ATL::CAtlException *v14; // rbx
  UINT32 v15; // [rsp+20h] [rbp-A8h]
  unsigned int v16; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v17[2]; // [rsp+38h] [rbp-90h] BYREF
  ATL::CAtlException *v18; // [rsp+48h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-78h] BYREF
  const char *v20; // [rsp+70h] [rbp-58h]
  __int64 v21; // [rsp+78h] [rbp-50h]
  _QWORD *v22; // [rsp+80h] [rbp-48h]
  __int64 v23; // [rsp+88h] [rbp-40h]
  unsigned int *v24; // [rsp+90h] [rbp-38h]
  __int64 v25; // [rsp+98h] [rbp-30h]

  v17[1] = -2LL;
  v16 = 0;
  *((_DWORD *)this + 2) = a2;
  *(_QWORD *)this = a4;
  ProcessHeap = GetProcessHeap();
  v7 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  v10 = v7;
  v17[0] = v7;
  if ( v7 )
  {
    v7[2] = 1;
    *(_QWORD *)v7 = &CDuckingNotification::CSharedNotificationData::`vftable';
    v7[4] = 0;
  }
  else
  {
    v10 = 0LL;
  }
  v11 = *((_QWORD *)this + 3);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  *((_QWORD *)this + 3) = v10;
  if ( !v10 )
  {
    result = 2147942414LL;
    v16 = -2147024882;
LABEL_11:
    v13 = (const struct _TlgProvider_t *)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Du, &WPP_f0c26e893d54393037413041046a80ee_Traceguids, result);
      result = v16;
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v20 = "__FUNC__";
      v21 = 9LL;
      LODWORD(v17[0]) = 524;
      v22 = v17;
      v23 = 4LL;
      v24 = &v16;
      v25 = 4LL;
      TlgWrite(v13, &unk_18002D869, v8, v9, v15, &pData);
      return v16;
    }
    return result;
  }
  if ( a3 )
  {
    v16 = 0;
    try
    {
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::operator=(
        (char *)this + 16,
        a3);
    }
    catch ( ATL::CAtlException *v18 )
    {
      v14 = v18;
      if ( *(_DWORD *)v18 == -1073741571 )
        _resetstkoflw();
      v16 = *(_DWORD *)v14;
    }
  }
  result = v16;
  if ( (v16 & 0x80000000) != 0 )
    goto LABEL_11;
  return result;
}
