/*
 * XREFs of ACPIDeviceIdMutiStringMatchCallback @ 0x1C0003E30
 * Callers:
 *     <none>
 * Callees:
 *     ACPIConvertWideStringToUpperCaseHelper @ 0x1C0004110 (ACPIConvertWideStringToUpperCaseHelper.c)
 *     ACPIAnsiStringToWideHelper @ 0x1C0004154 (ACPIAnsiStringToWideHelper.c)
 *     __security_check_cookie @ 0x1C00235E0 (__security_check_cookie.c)
 *     memmove @ 0x1C0023800 (memmove.c)
 *     memset @ 0x1C0023B40 (memset.c)
 */

__int64 __fastcall ACPIDeviceIdMutiStringMatchCallback(
        __int64 **a1,
        int a2,
        const void **a3,
        unsigned int a4,
        _DWORD *a5,
        int a6)
{
  const void **v6; // r14
  wchar_t *v10; // rdi
  unsigned int v11; // r15d
  unsigned int v12; // ebp
  __int64 *v13; // rsi
  __int64 v14; // rsi
  unsigned __int64 v15; // rax
  int v16; // edx
  unsigned int v17; // r13d
  _DWORD *v18; // rax
  _BYTE *v19; // rcx
  __int64 v20; // r14
  __int64 v21; // rbx
  size_t v22; // r8
  __int64 v23; // rcx
  wchar_t *v24; // rax
  const wchar_t *v25; // rsi
  __int64 v26; // r13
  __int64 v27; // rax
  unsigned int v28; // r14d
  const wchar_t **v29; // rbx
  unsigned __int64 v30; // r12
  PVOID *v31; // rbx
  __int64 v32; // rsi
  int v34; // [rsp+20h] [rbp-168h]
  const void **v35; // [rsp+28h] [rbp-160h]
  SIZE_T v36; // [rsp+30h] [rbp-158h]
  PVOID PoolWithTag; // [rsp+38h] [rbp-150h]
  _QWORD v38[32]; // [rsp+40h] [rbp-148h] BYREF

  v6 = a3;
  v35 = a3;
  v10 = 0LL;
  memset(v38, 0, sizeof(v38));
  v11 = 1;
  v12 = 0;
  if ( a2 == 1 )
  {
    v13 = *a1;
    if ( *((_DWORD *)v13 + 2) >= 0x18u )
    {
      v14 = *v13;
      if ( v14 )
      {
        if ( a6 == a4 )
        {
          v15 = *(_QWORD *)(v14 + 8);
          if ( v15 >= 4 )
          {
            if ( v15 == 4 )
              return 0;
            if ( a4 <= 0x10 )
            {
              v16 = *(_DWORD *)(v14 + 16);
              v17 = 0;
              v34 = v16;
              if ( !a4 )
                goto LABEL_38;
              v18 = a5;
              do
              {
                v19 = *v6;
                if ( *v6 && *v18 == v16 )
                {
                  v20 = -1LL;
                  do
                    ++v20;
                  while ( v19[v20] );
                  if ( (unsigned int)v20 > 0x7FFE )
                    goto LABEL_28;
                  v21 = 2LL * v12;
                  LOWORD(v38[v21]) = 2 * v20;
                  v36 = (unsigned __int16)(2 * v20 + 2);
                  WORD1(v38[v21]) = v36;
                  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v36, 0x53706341u);
                  v38[2 * v12 + 1] = PoolWithTag;
                  if ( !PoolWithTag )
                    goto LABEL_28;
                  v22 = (unsigned int)(v20 + 1);
                  v6 = v35;
                  memmove(PoolWithTag, *v35, v22);
                  ACPIAnsiStringToWideHelper(PoolWithTag, v36);
                  ACPIConvertWideStringToUpperCaseHelper(v23, v36);
                  v18 = a5;
                  ++v12;
                  v16 = v34;
                }
                ++v18;
                ++v6;
                ++v17;
                a5 = v18;
                v35 = v6;
              }
              while ( v17 < a4 );
              if ( v12 )
              {
                v24 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, *(_QWORD *)(v14 + 8), 0x53706341u);
                v10 = v24;
                if ( v24 )
                {
                  memmove(v24, *(const void **)v14, *(_QWORD *)(v14 + 8));
                  ACPIConvertWideStringToUpperCaseHelper(v10, *(_QWORD *)(v14 + 8) - 4LL);
                  v25 = v10;
                  v11 = 0;
                  LODWORD(v26) = 0;
                  if ( *v10 )
                  {
                    while ( 2 )
                    {
                      v27 = -1LL;
                      do
                        ++v27;
                      while ( v25[v27] );
                      v28 = 0;
                      v26 = (unsigned int)(v27 + v26 + 1);
                      v29 = (const wchar_t **)&v38[1];
                      v30 = 2LL * (unsigned int)v27;
                      do
                      {
                        if ( v30 >= *((unsigned __int16 *)v29 - 4) && wcsstr(v25, *v29) )
                        {
                          v11 = 2;
                          goto LABEL_28;
                        }
                        ++v28;
                        v29 += 2;
                      }
                      while ( v28 < v12 );
                      v25 = &v10[v26];
                      if ( *v25 )
                        continue;
                      break;
                    }
                  }
                }
              }
              else
              {
LABEL_38:
                v11 = 0;
              }
            }
          }
        }
      }
    }
  }
LABEL_28:
  if ( v12 )
  {
    v31 = (PVOID *)&v38[1];
    v32 = v12;
    do
    {
      if ( *v31 )
        ExFreePoolWithTag(*v31, 0x53706341u);
      v31 += 2;
      --v32;
    }
    while ( v32 );
  }
  if ( v10 )
    ExFreePoolWithTag(v10, 0x53706341u);
  return v11;
}
