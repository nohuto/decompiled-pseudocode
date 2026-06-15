/*
 * XREFs of ?MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ @ 0x180032BE8
 * Callers:
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x180032E98 (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 * Callees:
 *     ?Clear@CSecurityDesc@ATL@@MEAAXXZ @ 0x180032B10 (-Clear@CSecurityDesc@ATL@@MEAAXXZ.c)
 *     ?GetControl@CSecurityDesc@ATL@@QEBA_NPEAG@Z @ 0x180032E5C (-GetControl@CSecurityDesc@ATL@@QEBA_NPEAG@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x18006A118 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x18006A13C (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 */

void __fastcall ATL::CSecurityDesc::MakeAbsolute(PSECURITY_DESCRIPTOR *this)
{
  struct _ACL *pSacl; // rsi
  PSECURITY_DESCRIPTOR v3; // rcx
  void *v4; // r13
  DWORD v5; // edi
  void *pOwner; // r12
  DWORD v7; // edi
  void *pPrimaryGroup; // r15
  DWORD v9; // edi
  struct _ACL *v10; // r14
  void (__fastcall *v11)(ATL::CSecurityDesc *); // rdi
  int Error; // ebx
  DWORD dwDaclSize; // [rsp+60h] [rbp-18h] BYREF
  DWORD dwAbsoluteSecurityDescriptorSize[5]; // [rsp+64h] [rbp-14h] BYREF
  unsigned __int16 v15; // [rsp+C0h] [rbp+48h] BYREF
  DWORD dwPrimaryGroupSize; // [rsp+C8h] [rbp+50h] BYREF
  DWORD dwOwnerSize; // [rsp+D0h] [rbp+58h] BYREF
  DWORD dwSaclSize; // [rsp+D8h] [rbp+60h] BYREF

  pSacl = 0LL;
  if ( this[1] )
  {
    if ( !ATL::CSecurityDesc::GetControl((ATL::CSecurityDesc *)this, &v15) )
      ATL::AtlThrowImpl(-2147467259);
    if ( (v15 & 0x8000u) != 0 )
    {
      v3 = this[1];
      dwSaclSize = 0;
      dwDaclSize = 0;
      dwPrimaryGroupSize = 0;
      dwOwnerSize = 0;
      dwAbsoluteSecurityDescriptorSize[0] = 0;
      MakeAbsoluteSD(
        v3,
        0LL,
        dwAbsoluteSecurityDescriptorSize,
        0LL,
        &dwDaclSize,
        0LL,
        &dwSaclSize,
        0LL,
        &dwOwnerSize,
        0LL,
        &dwPrimaryGroupSize);
      if ( GetLastError() != 122 )
        ATL::AtlThrowLastWin32();
      v4 = malloc(dwAbsoluteSecurityDescriptorSize[0]);
      if ( !v4 )
        ATL::AtlThrowImpl(-2147467259);
      v5 = dwOwnerSize;
      if ( dwOwnerSize )
        pOwner = malloc(dwOwnerSize);
      else
        pOwner = 0LL;
      if ( v5 && !pOwner )
        ATL::AtlThrowImpl(-2147467259);
      v7 = dwPrimaryGroupSize;
      if ( dwPrimaryGroupSize )
        pPrimaryGroup = malloc(dwPrimaryGroupSize);
      else
        pPrimaryGroup = 0LL;
      if ( v7 && !pPrimaryGroup )
        ATL::AtlThrowImpl(-2147467259);
      v9 = dwDaclSize;
      if ( dwDaclSize )
        v10 = (struct _ACL *)malloc(dwDaclSize);
      else
        v10 = 0LL;
      if ( v9 && !v10 )
        ATL::AtlThrowImpl(-2147467259);
      if ( dwSaclSize )
      {
        pSacl = (struct _ACL *)malloc(dwSaclSize);
        if ( !pSacl )
          ATL::AtlThrowImpl(-2147467259);
      }
      if ( !MakeAbsoluteSD(
              this[1],
              v4,
              dwAbsoluteSecurityDescriptorSize,
              v10,
              &dwDaclSize,
              pSacl,
              &dwSaclSize,
              pOwner,
              &dwOwnerSize,
              pPrimaryGroup,
              &dwPrimaryGroupSize) )
      {
        Error = ATL::AtlHresultFromLastError();
        free(v4);
        free(pOwner);
        free(pPrimaryGroup);
        free(v10);
        free(pSacl);
        ATL::AtlThrowImpl(Error);
      }
      v11 = (void (__fastcall *)(ATL::CSecurityDesc *))*((_QWORD *)*this + 1);
      if ( v11 == ATL::CSecurityDesc::Clear )
        ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)this);
      else
        v11((ATL::CSecurityDesc *)this);
      this[1] = v4;
    }
  }
}
