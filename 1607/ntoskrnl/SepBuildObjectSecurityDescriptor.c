/*
 * XREFs of SepBuildObjectSecurityDescriptor @ 0x140694BB4
 * Callers:
 *     SeAdjustObjectAppContainerSecurity @ 0x140694880 (SeAdjustObjectAppContainerSecurity.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140412D30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140412D90 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140479BD8 (RtlSetSaclSecurityDescriptor.c)
 *     RtlMakeSelfRelativeSD @ 0x1404BA0F0 (RtlMakeSelfRelativeSD.c)
 *     SepBuildDaclWithAllApplicationPackageSid @ 0x140694A10 (SepBuildDaclWithAllApplicationPackageSid.c)
 */

NTSTATUS __fastcall SepBuildObjectSecurityDescriptor(__int64 a1, unsigned __int8 *a2, char a3, _QWORD *a4)
{
  ULONG v8; // edx
  void *v9; // rdi
  PACL v10; // rsi
  NTSTATUS result; // eax
  __int16 v12; // cx
  __int64 v13; // rax
  ACL *v14; // rcx
  NTSTATUS v15; // eax
  NTSTATUS SelfRelativeSD; // ebx
  __int16 v17; // ax
  ACL *v18; // r8
  __int64 v19; // rax
  char v20; // dl
  BOOLEAN v21; // al
  BOOLEAN v22; // dl
  PVOID PoolWithTag; // rax
  _WORD SecurityDescriptor[24]; // [rsp+20h] [rbp-30h] BYREF
  PACL Dacl; // [rsp+88h] [rbp+38h] BYREF

  memset(SecurityDescriptor, 0, 0x28uLL);
  v8 = *a2;
  v9 = 0LL;
  Dacl = 0LL;
  v10 = 0LL;
  *a4 = 0LL;
  result = RtlCreateSecurityDescriptor(SecurityDescriptor, v8);
  if ( result >= 0 )
  {
    v12 = *((_WORD *)a2 + 1);
    SecurityDescriptor[1] = v12 & 0x7FFF;
    if ( (v12 & 4) == 0 )
      goto LABEL_12;
    if ( v12 < 0 )
    {
      v13 = *((unsigned int *)a2 + 4);
      if ( !(_DWORD)v13 )
        goto LABEL_12;
      v14 = (ACL *)&a2[v13];
    }
    else
    {
      v14 = (ACL *)*((_QWORD *)a2 + 4);
    }
    if ( v14 && v14->AceCount )
    {
      v15 = SepBuildDaclWithAllApplicationPackageSid(v14, a3, &Dacl);
      v10 = Dacl;
      SelfRelativeSD = v15;
      if ( v15 < 0
        || (SelfRelativeSD = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, Dacl, 0), SelfRelativeSD < 0) )
      {
LABEL_26:
        if ( v10 )
          ExFreePoolWithTag(v10, 0);
        if ( SelfRelativeSD < 0 )
        {
          if ( v9 )
            ExFreePoolWithTag(v9, 0);
        }
        return SelfRelativeSD;
      }
LABEL_19:
      v20 = *((_WORD *)a2 + 1);
      v21 = (v20 & 0x20) != 0;
      v22 = (v20 & 0x10) != 0;
      if ( !v22
        || (SelfRelativeSD = RtlSetSaclSecurityDescriptor(SecurityDescriptor, v22, 0LL, v21), SelfRelativeSD >= 0) )
      {
        LODWORD(Dacl) = 0;
        SelfRelativeSD = RtlMakeSelfRelativeSD(SecurityDescriptor, 0LL, (PULONG)&Dacl);
        if ( SelfRelativeSD == -1073741789 )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)Dacl, 0x64536553u);
          v9 = PoolWithTag;
          if ( PoolWithTag )
          {
            SelfRelativeSD = RtlMakeSelfRelativeSD(SecurityDescriptor, PoolWithTag, (PULONG)&Dacl);
            if ( SelfRelativeSD >= 0 )
              *a4 = v9;
          }
          else
          {
            SelfRelativeSD = -1073741801;
          }
        }
      }
      goto LABEL_26;
    }
LABEL_12:
    v17 = *(_WORD *)(a1 + 2);
    if ( (v17 & 4) == 0 )
    {
LABEL_13:
      v18 = 0LL;
      goto LABEL_18;
    }
    if ( v17 < 0 )
    {
      v19 = *(unsigned int *)(a1 + 16);
      if ( !(_DWORD)v19 )
        goto LABEL_13;
      v18 = (ACL *)(a1 + v19);
    }
    else
    {
      v18 = *(ACL **)(a1 + 32);
    }
LABEL_18:
    SelfRelativeSD = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v18, 0);
    if ( SelfRelativeSD < 0 )
      return SelfRelativeSD;
    goto LABEL_19;
  }
  return result;
}
