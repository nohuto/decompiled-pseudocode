/*
 * XREFs of CmpCopySaclToVirtualKey @ 0x1405E2E88
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x1405E29D0 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x14001B408 (RtlGetDaclSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x1403C01DC (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1403C0234 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1403C091C (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x1403C0948 (RtlSetSaclSecurityDescriptor.c)
 *     CmpFreeSecurityDescriptor @ 0x1403DA6FC (CmpFreeSecurityDescriptor.c)
 *     CmpAssignSecurityDescriptor @ 0x1403DFF74 (CmpAssignSecurityDescriptor.c)
 *     RtlGetSaclSecurityDescriptor @ 0x1403E2B08 (RtlGetSaclSecurityDescriptor.c)
 *     HvpMarkCellDirty @ 0x1403F76E0 (HvpMarkCellDirty.c)
 *     SeReleaseSecurityDescriptor @ 0x14043429C (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSecurityDescriptor @ 0x140434450 (SeCaptureSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140478384 (RtlSetDaclSecurityDescriptor.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x1404A9920 (RtlGetOwnerSecurityDescriptor.c)
 *     RtlGetGroupSecurityDescriptor @ 0x14053FF40 (RtlGetGroupSecurityDescriptor.c)
 */

__int64 __fastcall CmpCopySaclToVirtualKey(__int64 a1, __int64 a2, ULONG_PTR a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // rdx
  unsigned int v7; // r13d
  __int64 v9; // rax
  int SaclSecurityDescriptor; // ebx
  __int64 v12; // rax
  __int64 v13; // r14
  _WORD *v14; // rsi
  int v15; // [rsp+30h] [rbp-40h] BYREF
  int v16; // [rsp+34h] [rbp-3Ch] BYREF
  PACL Sacl; // [rsp+38h] [rbp-38h] BYREF
  PSID Owner; // [rsp+40h] [rbp-30h] BYREF
  _BYTE SecurityDescriptor[2]; // [rsp+48h] [rbp-28h] BYREF
  __int16 v20; // [rsp+4Ah] [rbp-26h]
  void *SaclDefaulted; // [rsp+B0h] [rbp+40h] BYREF
  BOOLEAN SaclPresent; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v23; // [rsp+C8h] [rbp+58h]

  v23 = a4;
  v5 = *(unsigned int *)(a2 + 44);
  Sacl = 0LL;
  v7 = *(_DWORD *)(a4 + 44);
  v16 = -1;
  v15 = -1;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(a1 + 8))(a1, v5, &v16);
  if ( !v9 )
    return 3221225626LL;
  SaclSecurityDescriptor = RtlGetSaclSecurityDescriptor(
                             (PSECURITY_DESCRIPTOR)(v9 + 20),
                             &SaclPresent,
                             &Sacl,
                             (PBOOLEAN)&SaclDefaulted);
  if ( SaclSecurityDescriptor >= 0 )
  {
    if ( SaclPresent )
    {
      v12 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a3 + 8))(a3, v7, &v15);
      v13 = v12;
      if ( v12 )
      {
        v14 = (_WORD *)(v12 + 20);
        SaclSecurityDescriptor = RtlCreateSecurityDescriptor(SecurityDescriptor, *(unsigned __int8 *)(v12 + 20));
        if ( SaclSecurityDescriptor >= 0 )
        {
          v20 = v14[1] & 0x7FFF;
          SaclSecurityDescriptor = RtlSetSaclSecurityDescriptor(
                                     SecurityDescriptor,
                                     SaclPresent,
                                     Sacl,
                                     (BOOLEAN)SaclDefaulted);
          if ( SaclSecurityDescriptor >= 0 )
          {
            SaclSecurityDescriptor = RtlGetOwnerSecurityDescriptor(v14, &Owner, (PBOOLEAN)&SaclDefaulted);
            if ( SaclSecurityDescriptor >= 0 )
            {
              SaclSecurityDescriptor = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Owner, (BOOLEAN)SaclDefaulted);
              if ( SaclSecurityDescriptor >= 0 )
              {
                SaclSecurityDescriptor = RtlGetGroupSecurityDescriptor(v14, &Owner, (PBOOLEAN)&SaclDefaulted);
                if ( SaclSecurityDescriptor >= 0 )
                {
                  SaclSecurityDescriptor = RtlSetGroupSecurityDescriptor(
                                             SecurityDescriptor,
                                             Owner,
                                             (BOOLEAN)SaclDefaulted);
                  if ( SaclSecurityDescriptor >= 0 )
                  {
                    SaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(
                                               v14,
                                               &SaclPresent,
                                               &Sacl,
                                               (PBOOLEAN)&SaclDefaulted);
                    if ( SaclSecurityDescriptor >= 0 )
                    {
                      SaclSecurityDescriptor = RtlSetDaclSecurityDescriptor(
                                                 SecurityDescriptor,
                                                 SaclPresent,
                                                 Sacl,
                                                 (BOOLEAN)SaclDefaulted);
                      if ( SaclSecurityDescriptor >= 0 )
                      {
                        SaclSecurityDescriptor = SeCaptureSecurityDescriptor(
                                                   (__int64)SecurityDescriptor,
                                                   0,
                                                   PagedPool,
                                                   1,
                                                   &SaclDefaulted);
                        if ( SaclSecurityDescriptor >= 0 )
                        {
                          if ( HvpMarkCellDirty(a3, v7, 0)
                            && HvpMarkCellDirty(a3, *(unsigned int *)(v13 + 4), 0)
                            && HvpMarkCellDirty(a3, *(unsigned int *)(v13 + 8), 0) )
                          {
                            CmpFreeSecurityDescriptor(a3, a5);
                            SaclSecurityDescriptor = CmpAssignSecurityDescriptor(a3, a5, v23, SaclDefaulted);
                            SeReleaseSecurityDescriptor(SaclDefaulted, 0, 1);
                          }
                          else
                          {
                            SeReleaseSecurityDescriptor(SaclDefaulted, 0, 1);
                            SaclSecurityDescriptor = -1073741443;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        (*(void (__fastcall **)(ULONG_PTR, int *))(a3 + 16))(a3, &v15);
      }
    }
  }
  (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v16);
  return (unsigned int)SaclSecurityDescriptor;
}
