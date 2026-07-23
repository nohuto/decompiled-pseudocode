/*
 * XREFs of SeRmReferenceFindCapName @ 0x14021B25C
 * Callers:
 *     AdtpBuildContextFromSecurityDescriptor @ 0x140238A9C (AdtpBuildContextFromSecurityDescriptor.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     SepRmReferenceFindCap @ 0x14021B49C (SepRmReferenceFindCap.c)
 *     SepValidateCAPIDs @ 0x14021B560 (SepValidateCAPIDs.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SeRmReferenceFindCapName(PSID Sid1, _DWORD *a2, _QWORD *a3)
{
  int v3; // ebx
  __int64 v5; // rdi
  unsigned int v6; // r15d
  _QWORD *PoolWithTag; // r14
  int v9; // ebp
  int Cap; // eax
  __int64 v11; // rdx
  unsigned __int16 **v12; // rcx
  __int64 v13; // r9
  unsigned __int16 v14; // r8
  int v15; // eax
  unsigned int v16; // r12d
  char *i; // rsi
  __int64 v18; // r15
  unsigned __int16 v19; // ax
  PSID v21; // [rsp+60h] [rbp+8h] BYREF
  __int64 v22; // [rsp+68h] [rbp+10h]
  _QWORD *v23; // [rsp+70h] [rbp+18h]

  v23 = a3;
  v21 = Sid1;
  v3 = 0;
  v22 = 0LL;
  v5 = 0LL;
  v6 = 0;
  PoolWithTag = 0LL;
  v9 = SepValidateCAPIDs(Sid1, &v21);
  if ( v9 >= 0 )
  {
    Cap = SepRmReferenceFindCap(Sid1);
    v5 = v22;
    v9 = Cap;
    if ( Cap >= 0 )
    {
      v11 = *(unsigned int *)(v22 + 60);
      if ( (_DWORD)v11 )
      {
        v12 = (unsigned __int16 **)(v22 + 64);
        v13 = (unsigned int)v11;
        do
        {
          v14 = **v12;
          v15 = v14;
          if ( v14 <= 2u )
            v15 = 0;
          v6 += v15;
          ++v12;
          --v13;
        }
        while ( v13 );
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6 + 16 * v11, 0x70536553u);
      if ( PoolWithTag )
      {
        v16 = 0;
        for ( i = (char *)&PoolWithTag[2 * *(unsigned int *)(v5 + 60)];
              v16 < *(_DWORD *)(v5 + 60);
              i += 2 * ((unsigned __int64)LOWORD(PoolWithTag[v18]) >> 1) )
        {
          v18 = 2LL * v16;
          PoolWithTag[2 * v16 + 1] = i;
          v19 = **(_WORD **)(v5 + 8LL * v16 + 64);
          if ( v19 <= 2u )
            v19 = 0;
          WORD1(PoolWithTag[2 * v16]) = v19;
          LOWORD(PoolWithTag[2 * v16]) = v19;
          memmove(i, *(const void **)(*(_QWORD *)(v5 + 8LL * v16++ + 64) + 8LL), v19);
        }
      }
      else
      {
        v9 = -1073741801;
      }
    }
  }
  *v23 = PoolWithTag;
  if ( v5 )
    v3 = *(_DWORD *)(v5 + 60);
  *a2 = v3;
  return (unsigned int)v9;
}
