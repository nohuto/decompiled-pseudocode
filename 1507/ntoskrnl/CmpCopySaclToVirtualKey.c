/*
 * XREFs of CmpCopySaclToVirtualKey @ 0x140659314
 * Callers:
 *     CmpDoBuildVirtualStack @ 0x1406584F0 (CmpDoBuildVirtualStack.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x1400EE24C (RtlGetDaclSecurityDescriptor.c)
 *     CmpRemoveSecurityCellList @ 0x14012AF2C (CmpRemoveSecurityCellList.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140413954 (RtlSetSaclSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140415C48 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x140416F98 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x140467694 (RtlGetOwnerSecurityDescriptor.c)
 *     HvpMarkCellDirty @ 0x14049F7A0 (HvpMarkCellDirty.c)
 *     HvFreeCell @ 0x14049FC7C (HvFreeCell.c)
 *     SeReleaseSecurityDescriptor @ 0x1404C8F88 (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSecurityDescriptor @ 0x1404C9790 (SeCaptureSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404D03E0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1404D0440 (RtlCreateSecurityDescriptor.c)
 *     RtlGetSaclSecurityDescriptor @ 0x140501210 (RtlGetSaclSecurityDescriptor.c)
 *     RtlGetGroupSecurityDescriptor @ 0x1405B5F04 (RtlGetGroupSecurityDescriptor.c)
 *     CmpGetSecurityDescriptorNode @ 0x1406597E0 (CmpGetSecurityDescriptorNode.c)
 */

__int64 __fastcall CmpCopySaclToVirtualKey(__int64 a1, __int64 a2, ULONG_PTR a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // rdx
  unsigned int v7; // r12d
  __int64 v9; // rax
  NTSTATUS SaclSecurityDescriptor; // ebx
  __int64 v12; // rax
  unsigned int *v13; // r14
  _WORD *v14; // rsi
  int v15; // eax
  void *v16; // rsi
  unsigned int v17; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // [rsp+20h] [rbp-60h]
  int v21; // [rsp+30h] [rbp-50h] BYREF
  int v22; // [rsp+34h] [rbp-4Ch] BYREF
  PACL Sacl; // [rsp+38h] [rbp-48h] BYREF
  PSID Owner; // [rsp+40h] [rbp-40h] BYREF
  void *v25; // [rsp+48h] [rbp-38h] BYREF
  __int64 v26; // [rsp+50h] [rbp-30h]
  _BYTE SecurityDescriptor[2]; // [rsp+58h] [rbp-28h] BYREF
  __int16 v28; // [rsp+5Ah] [rbp-26h]
  BOOLEAN SaclDefaulted; // [rsp+C0h] [rbp+40h] BYREF
  BOOLEAN SaclPresent; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v31; // [rsp+D8h] [rbp+58h]

  v31 = a4;
  v5 = *(unsigned int *)(a2 + 44);
  Sacl = 0LL;
  v25 = 0LL;
  v7 = *(_DWORD *)(a4 + 44);
  v21 = -1;
  v22 = -1;
  v26 = a4 + 44;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(a1 + 8))(a1, v5, &v21);
  if ( !v9 )
    return 3221225626LL;
  SaclSecurityDescriptor = RtlGetSaclSecurityDescriptor(
                             (PSECURITY_DESCRIPTOR)(v9 + 20),
                             &SaclPresent,
                             &Sacl,
                             &SaclDefaulted);
  if ( SaclSecurityDescriptor >= 0 )
  {
    if ( SaclPresent )
    {
      v12 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a3 + 8))(a3, v7, &v22);
      v13 = (unsigned int *)v12;
      if ( v12 )
      {
        v14 = (_WORD *)(v12 + 20);
        SaclSecurityDescriptor = RtlCreateSecurityDescriptor(SecurityDescriptor, *(unsigned __int8 *)(v12 + 20));
        if ( SaclSecurityDescriptor >= 0 )
        {
          v28 = v14[1] & 0x7FFF;
          SaclSecurityDescriptor = RtlSetSaclSecurityDescriptor(SecurityDescriptor, SaclPresent, Sacl, SaclDefaulted);
          if ( SaclSecurityDescriptor >= 0 )
          {
            SaclSecurityDescriptor = RtlGetOwnerSecurityDescriptor(v14, &Owner, &SaclDefaulted);
            if ( SaclSecurityDescriptor >= 0 )
            {
              SaclSecurityDescriptor = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Owner, SaclDefaulted);
              if ( SaclSecurityDescriptor >= 0 )
              {
                SaclSecurityDescriptor = RtlGetGroupSecurityDescriptor(v14, &Owner, &SaclDefaulted);
                if ( SaclSecurityDescriptor >= 0 )
                {
                  SaclSecurityDescriptor = RtlSetGroupSecurityDescriptor(SecurityDescriptor, Owner, SaclDefaulted);
                  if ( SaclSecurityDescriptor >= 0 )
                  {
                    SaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(v14, &SaclPresent, &Sacl, &SaclDefaulted);
                    if ( SaclSecurityDescriptor >= 0 )
                    {
                      SaclSecurityDescriptor = RtlSetDaclSecurityDescriptor(
                                                 SecurityDescriptor,
                                                 SaclPresent,
                                                 Sacl,
                                                 SaclDefaulted);
                      if ( SaclSecurityDescriptor >= 0 )
                      {
                        v15 = SeCaptureSecurityDescriptor((__int64)SecurityDescriptor, 0, PagedPool, 1, &v25);
                        v16 = v25;
                        SaclSecurityDescriptor = v15;
                        if ( v15 >= 0 )
                        {
                          if ( HvpMarkCellDirty(a3, v7, 0, 0LL)
                            && HvpMarkCellDirty(a3, v13[1], 0, 0LL)
                            && HvpMarkCellDirty(a3, v13[2], 0, 0LL) )
                          {
                            LOBYTE(v20) = 0;
                            SaclSecurityDescriptor = CmpGetSecurityDescriptorNode(a3, a5, v31, v16, v20, v26);
                            if ( SaclSecurityDescriptor >= 0 )
                            {
                              v17 = v13[3];
                              if ( v17 == 1 )
                              {
                                CmpRemoveSecurityCellList(a3, v7);
                                HvFreeCell(a3, v7, v18, v19);
                              }
                              else
                              {
                                v13[3] = v17 - 1;
                              }
                            }
                          }
                          else
                          {
                            SaclSecurityDescriptor = -1073741443;
                          }
                        }
                        if ( v16 )
                          SeReleaseSecurityDescriptor(v16, 0, 1);
                      }
                    }
                  }
                }
              }
            }
          }
        }
        (*(void (__fastcall **)(ULONG_PTR, int *))(a3 + 16))(a3, &v22);
      }
    }
  }
  (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v21);
  return (unsigned int)SaclSecurityDescriptor;
}
