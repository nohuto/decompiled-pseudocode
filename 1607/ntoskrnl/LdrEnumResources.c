/*
 * XREFs of LdrEnumResources @ 0x140686058
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14007BB6C (RtlImageDirectoryEntryToData.c)
 *     LdrpCompareResourceNamesWithValidation @ 0x1402113F8 (LdrpCompareResourceNamesWithValidation.c)
 */

NTSTATUS __stdcall LdrEnumResources(
        PVOID BaseAddress,
        PLDR_RESOURCE_INFO ResourceInfo,
        ULONG Level,
        ULONG *ResourceCount,
        LDR_ENUM_RESOURCE_INFO *Resources)
{
  ULONG v5; // edi
  ULONG v7; // esi
  const wchar_t **v8; // r15
  unsigned __int16 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rbx
  int v13; // ecx
  int *v14; // r14
  int v15; // eax
  NTSTATUS v16; // ebp
  bool v17; // zf
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rdi
  ULONG_PTR v22; // rdi
  int *v23; // rbp
  int v24; // edx
  int v25; // eax
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rsi
  ULONG_PTR v29; // rsi
  int *v30; // r15
  unsigned int v31; // r13d
  int v32; // ecx
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rcx
  LDR_ENUM_RESOURCE_INFO *v36; // r9
  char v37; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v38[3]; // [rsp+31h] [rbp-77h] BYREF
  unsigned int v39; // [rsp+34h] [rbp-74h]
  unsigned int v40; // [rsp+38h] [rbp-70h]
  ULONG v41; // [rsp+3Ch] [rbp-6Ch]
  ULONG v42; // [rsp+40h] [rbp-68h]
  unsigned int v43; // [rsp+44h] [rbp-64h]
  int v44; // [rsp+48h] [rbp-60h]
  int v45; // [rsp+4Ch] [rbp-5Ch]
  unsigned int v46; // [rsp+50h] [rbp-58h]
  ULONG Size; // [rsp+C8h] [rbp+20h] BYREF

  v5 = 0;
  v7 = Level;
  v8 = (const wchar_t **)ResourceInfo;
  v41 = 0;
  if ( Resources )
    v42 = *ResourceCount;
  else
    v42 = 0;
  *ResourceCount = 0;
  v9 = (unsigned __int16 *)RtlImageDirectoryEntryToData(BaseAddress, 1u, 2u, &Size);
  v11 = (__int64)v9;
  if ( !v9 )
    return -1073741687;
  v13 = v9[7];
  v14 = (int *)(v9 + 8);
  v15 = v9[6];
  v16 = 0;
  v17 = v15 + v13 == 0;
  v18 = (unsigned int)(v15 + v13);
  v45 = 0;
  v40 = v18;
  v44 = 0;
  if ( v17 )
  {
LABEL_37:
    *ResourceCount = v5;
    return v16;
  }
  while ( v7 )
  {
    v19 = LdrpCompareResourceNamesWithValidation(v18, v10, *v8, v11, v14, &Size);
    v18 = v40;
    if ( !v19 )
      break;
LABEL_35:
    v14 += 2;
    if ( ++v44 >= (unsigned int)v18 )
    {
      v5 = v41;
      v16 = v45;
      goto LABEL_37;
    }
  }
  v20 = (unsigned int)v14[1];
  if ( (v20 & 0x80000000) != 0 )
  {
    v21 = (unsigned int)*v14;
    if ( (v21 & 0x80000000) != 0 )
    {
      LODWORD(v21) = v21 & 0x7FFFFFFF;
      v22 = v11 + v21;
    }
    else
    {
      v22 = *(unsigned __int16 *)v14;
    }
    LODWORD(v20) = v20 & 0x7FFFFFFF;
    v43 = 0;
    v23 = (int *)(v20 + v11 + 16);
    v24 = *(unsigned __int16 *)(v20 + v11 + 14);
    v25 = *(unsigned __int16 *)(v20 + v11 + 12);
    v17 = v25 + v24 == 0;
    v10 = (unsigned int)(v25 + v24);
    v39 = v10;
    if ( !v17 )
    {
      do
      {
        if ( v7 <= 1 || (v26 = LdrpCompareResourceNamesWithValidation(v18, v10, v8[1], v11, v23, &v37), v10 = v39, !v26) )
        {
          v27 = (unsigned int)v23[1];
          if ( (v27 & 0x80000000) == 0 )
            return -1073741701;
          v28 = (unsigned int)*v23;
          if ( (v28 & 0x80000000) != 0 )
          {
            LODWORD(v28) = v28 & 0x7FFFFFFF;
            v29 = v11 + v28;
          }
          else
          {
            v29 = *(unsigned __int16 *)v23;
          }
          LODWORD(v27) = v27 & 0x7FFFFFFF;
          v30 = (int *)(v27 + v11 + 16);
          v31 = 0;
          v32 = *(unsigned __int16 *)(v27 + v11 + 14);
          v33 = *(unsigned __int16 *)(v27 + v11 + 12);
          v17 = v33 + v32 == 0;
          v18 = (unsigned int)(v33 + v32);
          v46 = v18;
          if ( !v17 )
          {
            do
            {
              if ( Level <= 2
                || !(unsigned int)LdrpCompareResourceNamesWithValidation(
                                    v18,
                                    v10,
                                    (const wchar_t *)ResourceInfo->Language,
                                    v11,
                                    v30,
                                    v38) )
              {
                v34 = (unsigned int)v30[1];
                if ( (int)v34 < 0 )
                  return -1073741701;
                v35 = (unsigned int)*v30;
                if ( (v35 & 0x80000000) != 0 )
                {
                  LODWORD(v35) = v35 & 0x7FFFFFFF;
                  v18 = v11 + v35;
                }
                else
                {
                  v18 = *(unsigned __int16 *)v30;
                }
                v10 = 5LL * v41++;
                if ( v41 > v42 )
                {
                  v45 = -1073741820;
                }
                else
                {
                  v36 = Resources;
                  *(&Resources->Type + v10) = v22;
                  *(&v36->Name + v10) = v29;
                  *(&v36->Language + v10) = v18;
                  *((_QWORD *)&v36->Data + v10) = (char *)BaseAddress + *(unsigned int *)(v34 + v11);
                  *(&v36->Size + v10) = *(unsigned int *)(v34 + v11 + 4);
                }
              }
              ++v31;
              v30 += 2;
            }
            while ( v31 < v46 );
            v10 = v39;
          }
          v8 = (const wchar_t **)ResourceInfo;
          v7 = Level;
        }
        v23 += 2;
        ++v43;
      }
      while ( v43 < (unsigned int)v10 );
      v18 = v40;
    }
    goto LABEL_35;
  }
  return -1073741701;
}
