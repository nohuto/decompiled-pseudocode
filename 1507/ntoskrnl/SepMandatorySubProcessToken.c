/*
 * XREFs of SepMandatorySubProcessToken @ 0x14002B81C
 * Callers:
 *     SeSubProcessToken @ 0x14046A560 (SeSubProcessToken.c)
 * Callees:
 *     RtlSidDominates @ 0x14002D850 (RtlSidDominates.c)
 *     SepLocateTokenIntegrity @ 0x14004563C (SepLocateTokenIntegrity.c)
 *     RtlFindAceByType @ 0x1400459A0 (RtlFindAceByType.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     SeTokenIsAdmin @ 0x14040FEA8 (SeTokenIsAdmin.c)
 *     ObQuerySecurityObject @ 0x140466F34 (ObQuerySecurityObject.c)
 *     PsReferenceProcessFilePointer @ 0x1404676D0 (PsReferenceProcessFilePointer.c)
 *     RtlCreateSecurityDescriptor @ 0x1404D0440 (RtlCreateSecurityDescriptor.c)
 */

__int64 __fastcall SepMandatorySubProcessToken(_DWORD *Token, __int64 a2, __int64 a3, _QWORD *a4)
{
  _BYTE *v4; // rsi
  void *v5; // r12
  int v6; // eax
  NTSTATUS SecurityObject; // edi
  _QWORD *v8; // r14
  __int16 v11; // ax
  __int64 v12; // rax
  _BYTE *v13; // rcx
  __int64 AceByType; // rax
  _BYTE *PoolWithTag; // rax
  void *v17; // r14
  void **TokenIntegrity; // rax
  __int64 v19; // rax
  _QWORD *v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned __int8 v23; // al
  __int64 *v24; // r8
  __int64 v25; // r11
  __int64 v26; // r9
  unsigned __int8 v27; // cl
  unsigned int v28; // r10d
  __int64 v29; // rdx
  unsigned __int8 v30; // cl
  unsigned int v31; // eax
  int v32; // eax
  unsigned __int8 v33; // al
  _DWORD NumberOfBytes[3]; // [rsp+34h] [rbp-95h] BYREF
  void *v35; // [rsp+40h] [rbp-89h] BYREF
  _BYTE SecurityDescriptor[128]; // [rsp+50h] [rbp-79h] BYREF

  v4 = 0LL;
  *(_QWORD *)&NumberOfBytes[1] = a4;
  *a4 = 0LL;
  v5 = 0LL;
  v6 = *(_DWORD *)(a3 + 1716);
  SecurityObject = 0;
  v35 = 0LL;
  v8 = a4;
  if ( (v6 & 1) != 0 || (*(_DWORD *)(a2 + 212) & 2) == 0 )
    goto LABEL_13;
  SecurityObject = PsReferenceProcessFilePointer(a3, &v35);
  if ( SecurityObject < 0
    || (NumberOfBytes[0] = 128,
        v4 = SecurityDescriptor,
        SecurityObject = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u),
        SecurityObject < 0) )
  {
    v5 = v35;
    goto LABEL_15;
  }
  v5 = v35;
  SecurityObject = ObQuerySecurityObject((_DWORD)v35, 16, (unsigned int)SecurityDescriptor, 128, (__int64)NumberOfBytes);
  if ( SecurityObject != -1073741789 )
  {
LABEL_6:
    if ( SecurityObject >= 0 && v4 )
    {
      v11 = *((_WORD *)v4 + 1);
      if ( (v11 & 0x10) != 0 )
      {
        if ( v11 >= 0 )
        {
          v13 = (_BYTE *)*((_QWORD *)v4 + 3);
LABEL_12:
          AceByType = RtlFindAceByType(v13, 17LL);
          if ( AceByType )
          {
            v17 = (void *)(AceByType + 8);
            TokenIntegrity = (void **)SepLocateTokenIntegrity(a2);
            if ( TokenIntegrity )
            {
              SecurityObject = RtlSidDominates(*TokenIntegrity, v17);
              if ( SecurityObject < 0 )
                goto LABEL_15;
            }
            v8 = *(_QWORD **)&NumberOfBytes[1];
          }
          goto LABEL_13;
        }
        v12 = *((unsigned int *)v4 + 3);
        if ( (_DWORD)v12 )
        {
          v13 = &v4[v12];
          goto LABEL_12;
        }
      }
      v13 = 0LL;
      goto LABEL_12;
    }
    SecurityObject = 0;
LABEL_13:
    if ( Token )
    {
      if ( (Token[50] & 0x1000) != 0 && !SeTokenIsAdmin(Token) )
      {
        *(_DWORD *)(a2 + 200) &= ~0x1000u;
        v19 = SepLocateTokenIntegrity(a2);
        v20 = (_QWORD *)v19;
        if ( v19 )
        {
          v21 = *(_QWORD *)(*(_QWORD *)(a2 + 216) + 48LL);
          if ( v21 )
          {
            v25 = SepLocateTokenIntegrity(v21);
            if ( v25 )
            {
              v26 = *v24;
              v27 = *(_BYTE *)(*v24 + 1);
              v28 = v27 ? *(_DWORD *)(v26 + 4LL * ((unsigned int)v27 - 1) + 8) : 0;
              v29 = *(_QWORD *)v25;
              v30 = *(_BYTE *)(*(_QWORD *)v25 + 1LL);
              v31 = v30 ? *(_DWORD *)(v29 + 4LL * ((unsigned int)v30 - 1) + 8) : 0;
              if ( v28 > v31 )
              {
                if ( v30 )
                  v32 = *(_DWORD *)(v29 + 4LL * ((unsigned int)v30 - 1) + 8);
                else
                  v32 = 0;
                *(_DWORD *)(v26 + 8) = v32;
                *v8 = *v24;
                v33 = *(_BYTE *)(*(_QWORD *)v25 + 1LL);
                if ( v33 && *(_DWORD *)(*(_QWORD *)v25 + 4LL * ((unsigned int)v33 - 1) + 8) >= 0x2000u )
                  *(_DWORD *)(a2 + 200) |= 0x2000u;
                else
                  *(_DWORD *)(a2 + 200) &= ~0x2000u;
              }
            }
          }
          else
          {
            v22 = *(_QWORD *)v19;
            v23 = *(_BYTE *)(*(_QWORD *)v19 + 1LL);
            if ( v23 && *(_DWORD *)(v22 + 4LL * ((unsigned int)v23 - 1) + 8) > 0x2000u )
            {
              *(_DWORD *)(v22 + 8) = 0x2000;
              *v8 = *v20;
            }
          }
        }
      }
    }
    goto LABEL_15;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes[0], 0x20206553u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
  {
    SecurityObject = -1073741801;
    goto LABEL_15;
  }
  SecurityObject = RtlCreateSecurityDescriptor(PoolWithTag, 1u);
  if ( SecurityObject >= 0 )
  {
    SecurityObject = ObQuerySecurityObject((_DWORD)v5, 16, (_DWORD)v4, NumberOfBytes[0], (__int64)NumberOfBytes);
    goto LABEL_6;
  }
LABEL_15:
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x746C6644u);
  if ( v4 && v4 != SecurityDescriptor )
    ExFreePoolWithTag(v4, 0);
  return (unsigned int)SecurityObject;
}
