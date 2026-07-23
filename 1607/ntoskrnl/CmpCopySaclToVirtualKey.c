/*
 * XREFs of CmpCopySaclToVirtualKey @ 0x140602258
 * Callers:
 *     CmpDoBuildVirtualStack @ 0x140600C9C (CmpDoBuildVirtualStack.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x140009844 (RtlGetDaclSecurityDescriptor.c)
 *     CmpDereferenceSecurityNode @ 0x1401B63F8 (CmpDereferenceSecurityNode.c)
 *     RtlGetSaclSecurityDescriptor @ 0x1403F5EAC (RtlGetSaclSecurityDescriptor.c)
 *     CmpGetSecurityDescriptorNode @ 0x1403FC310 (CmpGetSecurityDescriptorNode.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140412D30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140412D90 (RtlCreateSecurityDescriptor.c)
 *     SeCaptureSecurityDescriptor @ 0x14041FD80 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x14044CA54 (SeReleaseSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140479BD8 (RtlSetSaclSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x14048DBFC (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14048DC54 (RtlSetOwnerSecurityDescriptor.c)
 *     CmpFreeSecurityDescriptor @ 0x1404BCD30 (CmpFreeSecurityDescriptor.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x1404D5328 (RtlGetOwnerSecurityDescriptor.c)
 *     HvpMarkCellDirty @ 0x1404F6AE0 (HvpMarkCellDirty.c)
 *     RtlGetGroupSecurityDescriptor @ 0x140543698 (RtlGetGroupSecurityDescriptor.c)
 */

__int64 __fastcall CmpCopySaclToVirtualKey(__int64 a1, __int64 a2, ULONG_PTR a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // esi
  __int64 v6; // rdx
  unsigned int v8; // r14d
  __int64 v10; // rax
  int SaclSecurityDescriptor; // ebx
  BOOLEAN v13; // r15
  __int64 v14; // rax
  __int64 v15; // r13
  _WORD *v16; // rsi
  int v17; // eax
  void *v18; // rsi
  __int64 v19; // r14
  int v20; // [rsp+30h] [rbp-41h] BYREF
  PACL Sacl; // [rsp+38h] [rbp-39h] BYREF
  _DWORD v22[2]; // [rsp+40h] [rbp-31h] BYREF
  _DWORD v23[2]; // [rsp+48h] [rbp-29h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+50h] [rbp-21h]
  PSID Owner; // [rsp+58h] [rbp-19h] BYREF
  void *v26; // [rsp+60h] [rbp-11h] BYREF
  _BYTE SecurityDescriptor[2]; // [rsp+68h] [rbp-9h] BYREF
  __int16 v28; // [rsp+6Ah] [rbp-7h]
  BOOLEAN SaclDefaulted; // [rsp+D0h] [rbp+5Fh] BYREF
  BOOLEAN SaclPresent; // [rsp+D8h] [rbp+67h] BYREF
  __int64 v31; // [rsp+E8h] [rbp+77h]

  v31 = a4;
  v5 = *(_DWORD *)(a4 + 44);
  v6 = *(unsigned int *)(a2 + 44);
  v23[1] = 0;
  v23[0] = -1;
  v8 = -1;
  v22[0] = -1;
  v20 = -1;
  v22[1] = 0;
  Sacl = 0LL;
  v26 = 0LL;
  LODWORD(BugCheckParameter3) = v5;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(a1 + 8))(a1, v6, v23);
  if ( !v10 )
    return 3221225626LL;
  SaclSecurityDescriptor = RtlGetSaclSecurityDescriptor(
                             (PSECURITY_DESCRIPTOR)(v10 + 20),
                             &SaclPresent,
                             &Sacl,
                             &SaclDefaulted);
  if ( SaclSecurityDescriptor >= 0 )
  {
    v13 = SaclPresent;
    if ( SaclPresent )
    {
      v14 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a3 + 8))(a3, v5, v22);
      v15 = v14;
      if ( v14 )
      {
        v16 = (_WORD *)(v14 + 20);
        SaclSecurityDescriptor = RtlCreateSecurityDescriptor(SecurityDescriptor, *(unsigned __int8 *)(v14 + 20));
        if ( SaclSecurityDescriptor >= 0 )
        {
          v28 = v16[1] & 0x7FFF;
          SaclSecurityDescriptor = RtlSetSaclSecurityDescriptor(SecurityDescriptor, v13, Sacl, SaclDefaulted);
          if ( SaclSecurityDescriptor >= 0 )
          {
            SaclSecurityDescriptor = RtlGetOwnerSecurityDescriptor(v16, &Owner, &SaclDefaulted);
            if ( SaclSecurityDescriptor >= 0 )
            {
              SaclSecurityDescriptor = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Owner, SaclDefaulted);
              if ( SaclSecurityDescriptor >= 0 )
              {
                SaclSecurityDescriptor = RtlGetGroupSecurityDescriptor(v16, &Owner, &SaclDefaulted);
                if ( SaclSecurityDescriptor >= 0 )
                {
                  SaclSecurityDescriptor = RtlSetGroupSecurityDescriptor(SecurityDescriptor, Owner, SaclDefaulted);
                  if ( SaclSecurityDescriptor >= 0 )
                  {
                    SaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(v16, &SaclPresent, &Sacl, &SaclDefaulted);
                    if ( SaclSecurityDescriptor >= 0 )
                    {
                      SaclSecurityDescriptor = RtlSetDaclSecurityDescriptor(
                                                 SecurityDescriptor,
                                                 SaclPresent,
                                                 Sacl,
                                                 SaclDefaulted);
                      if ( SaclSecurityDescriptor >= 0 )
                      {
                        v17 = SeCaptureSecurityDescriptor((__int64)SecurityDescriptor, 0, PagedPool, 1, &v26);
                        v18 = v26;
                        SaclSecurityDescriptor = v17;
                        if ( v17 >= 0 )
                        {
                          if ( HvpMarkCellDirty(a3, (unsigned int)BugCheckParameter3, 0)
                            && HvpMarkCellDirty(a3, *(unsigned int *)(v15 + 4), 0)
                            && HvpMarkCellDirty(a3, *(unsigned int *)(v15 + 8), 0) )
                          {
                            v19 = v31;
                            SaclSecurityDescriptor = CmpGetSecurityDescriptorNode(a3, a5, v31, v18, 0, (__int64)&v20);
                            if ( SaclSecurityDescriptor < 0 )
                            {
                              v8 = v20;
                            }
                            else
                            {
                              CmpFreeSecurityDescriptor(a3, a5);
                              *(_DWORD *)(v19 + 44) = v20;
                              v8 = -1;
                            }
                          }
                          else
                          {
                            SeReleaseSecurityDescriptor(v18, 0, 1);
                            SaclSecurityDescriptor = -1073741443;
                          }
                        }
                        if ( v18 )
                          SeReleaseSecurityDescriptor(v18, 0, 1);
                      }
                    }
                  }
                }
              }
            }
          }
        }
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a3 + 16))(a3, v22);
      }
    }
  }
  (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v23);
  if ( v8 != -1 )
    CmpDereferenceSecurityNode(a3, v8);
  return (unsigned int)SaclSecurityDescriptor;
}
