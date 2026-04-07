/*
 * XREFs of ?MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NPEBUMilPointAndSizeL@@PEAPEAVCResource@@@Z @ 0x18007D7B4
 * Callers:
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180017064 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAM@Z @ 0x180082D10 (-GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAM@Z.c)
 *     ?HasCVIOfCompatibleSize@CWindowSnapshot@@QEAA_NPEBUtagRECT@@@Z @ 0x180082D64 (-HasCVIOfCompatibleSize@CWindowSnapshot@@QEAA_NPEBUtagRECT@@@Z.c)
 */

void __fastcall CSecondaryWindowRepresentation::MakeStatic(
        CSecondaryWindowRepresentation *this,
        char a2,
        LONG *a3,
        struct CResource **a4)
{
  __int64 v4; // r11
  CWindowSnapshot *v9; // r10
  LONG v10; // r8d
  LONG v11; // edx
  LONG v12; // ecx
  LONG v13; // ecx
  CWindowSnapshot *v14; // r10
  const struct tagRECT *v15; // r11
  struct CResource *v16; // rbx
  struct CResource *v17; // [rsp+20h] [rbp-38h] BYREF
  struct tagRECT v18; // [rsp+28h] [rbp-30h] BYREF

  v4 = *((_QWORD *)this + 4);
  if ( v4 )
  {
    v9 = *(CWindowSnapshot **)(v4 + 408);
    v10 = *a3;
    v11 = a3[1];
    v12 = a3[2];
    v17 = 0LL;
    v18.right = v10 + v12;
    v13 = v11 + a3[3];
    v18.left = v10;
    v18.top = v11;
    v18.bottom = v13;
    if ( a2
      && v9
      && CWindowSnapshot::HasCVIOfCompatibleSize(v9, &v18)
      && (int)CWindowSnapshot::GetCVI(v14, v15 + 3, &v17, (float *)this + 126) >= 0 )
    {
      if ( *a4 )
        CBaseObject::Release(*a4);
      v16 = v17;
      *a4 = v17;
      if ( v16 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v16 + 2);
        v16 = v17;
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, struct tagRECT *))(**((_QWORD **)v16 + 2) + 968LL))(
        *((_QWORD *)v16 + 2),
        *((unsigned int *)v16 + 6),
        &v18);
      CBaseObject::Release(v16);
      *((_BYTE *)this + 160) = 1;
    }
    else
    {
      *((_DWORD *)this + 10) |= 0x200u;
    }
  }
}
