/*
 * XREFs of NtFilterBootOption @ 0x1406D6460
 * Callers:
 *     <none>
 * Callees:
 *     RtlCheckTokenMembership @ 0x1400083B0 (RtlCheckTokenMembership.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     SepSecureBootCorrectBcd @ 0x1406D68C4 (SepSecureBootCorrectBcd.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x1406D6E14 (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 */

__int64 __fastcall NtFilterBootOption(unsigned int a1, int a2, unsigned int a3, _BYTE *a4, size_t Size)
{
  int v6; // esi
  unsigned int v7; // r12d
  unsigned int v8; // r15d
  int v9; // eax
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  __int16 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // ebx
  int v18; // [rsp+24h] [rbp-54h]
  PVOID P; // [rsp+28h] [rbp-50h]
  _BYTE v20[72]; // [rsp+30h] [rbp-48h] BYREF

  v6 = a2;
  v7 = a1;
  P = 0LL;
  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, KeGetCurrentThread()->PreviousMode) )
  {
    RtlCheckTokenMembership(0LL, SeAliasAdminsSid);
    v16 = -1073741790;
    goto LABEL_56;
  }
  v16 = 0;
  v18 = 0;
  if ( !qword_14036CCD8 )
  {
    v16 = -2143092730;
    goto LABEL_56;
  }
  if ( v7 )
  {
    if ( v7 == 1 )
    {
      if ( v6 )
      {
        if ( a3 )
        {
          if ( a4 )
          {
            v8 = Size;
            if ( (_DWORD)Size )
            {
              v10 = dword_1403861C4;
              if ( !_bittest(&v10, HIBYTE(a3) & 0xF) )
              {
LABEL_20:
                v16 = 0;
                goto LABEL_56;
              }
              if ( KeGetCurrentThread()->PreviousMode )
              {
                if ( (unsigned __int64)&a4[(unsigned int)Size] > MmUserProbeAddress || &a4[(unsigned int)Size] < a4 )
                  *(_BYTE *)MmUserProbeAddress = 0;
                if ( (unsigned int)Size > 8 )
                {
                  P = ExAllocatePoolWithTag(PagedPool, (unsigned int)Size, 0x62536553u);
                  if ( !P )
                  {
                    v16 = -1073741801;
                    goto LABEL_56;
                  }
                  memmove(P, a4, (unsigned int)Size);
                  a4 = P;
                  v6 = a2;
                }
                else
                {
                  memmove(v20, a4, (unsigned int)Size);
                  a4 = v20;
                }
                v16 = 0;
                v7 = a1;
              }
              else
              {
                v16 = 0;
              }
              goto LABEL_32;
            }
          }
        }
      }
    }
    else
    {
      if ( v7 != 2 )
      {
        v16 = -1073741585;
        goto LABEL_56;
      }
      if ( v6 )
      {
        if ( a3 )
        {
          if ( !a4 )
          {
            v8 = Size;
            if ( !(_DWORD)Size )
            {
              v9 = dword_1403861C4;
              if ( !_bittest(&v9, HIBYTE(a3) & 0xF) )
                goto LABEL_20;
LABEL_32:
              v11 = 0;
              if ( *((_WORD *)qword_14036CCD8 + 18) )
              {
                while ( 1 )
                {
                  if ( *(_DWORD *)(qword_1403861D8 + 12LL * v11 + 4) == a3 )
                  {
                    v12 = *(_DWORD *)(qword_1403861D8 + 12LL * v11);
                    if ( !v12 || v12 == v6 )
                    {
                      v13 = *(_WORD *)(*(unsigned int *)(qword_1403861D8 + 12LL * v11 + 8) + qword_1403861E0);
                      if ( ((v13 & 0x20) == 0 || (dword_140356BA4 & 4) != 0)
                        && ((v13 & 0x40) == 0 || (dword_140356BA4 & 0x10) != 0) )
                      {
                        break;
                      }
                    }
                  }
                  if ( ++v11 >= *((unsigned __int16 *)qword_14036CCD8 + 18) )
                    goto LABEL_56;
                }
                v14 = 3LL * v11;
                if ( v7 == 1 )
                {
                  v16 = SepSecureBootValidateBcdDataAgainstBcdRule(qword_1403861D8 + 4 * v14, a4, v8);
                }
                else
                {
                  v16 = 0;
                  v15 = *(unsigned int *)(qword_1403861D8 + 4 * v14 + 8);
                  if ( (*(_BYTE *)(v15 + qword_1403861E0) & 0x1F) != 8 || *(_WORD *)(v15 + qword_1403861E0 + 2) )
                    v16 = -1069350910;
                }
              }
              goto LABEL_56;
            }
          }
        }
      }
    }
LABEL_47:
    v16 = -1073741811;
    goto LABEL_56;
  }
  if ( v6 || a3 || a4 || (_DWORD)Size )
    goto LABEL_47;
  if ( !_InterlockedCompareExchange(&dword_1403861C8, 0, 0) )
  {
    v16 = SepSecureBootCorrectBcd(v7);
    v18 = v16;
    if ( v16 < 0 )
      goto LABEL_56;
    _InterlockedExchange(&dword_1403861C8, 1);
  }
  v16 = v18;
LABEL_56:
  if ( P )
    ExFreePoolWithTag(P, 0x62536553u);
  return (unsigned int)v16;
}
