/*
 * XREFs of LdrEnumResources @ 0x1800DBCF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180031AF0 (RtlImageDirectoryEntryToData.c)
 *     LdrpCompareResourceNamesWithValidation @ 0x1800DC310 (LdrpCompareResourceNamesWithValidation.c)
 */

NTSTATUS __cdecl LdrEnumResources(
        PVOID DllHandle,
        PLDR_RESOURCE_INFO ResourceInfo,
        ULONG Level,
        ULONG *ResourceCount,
        PLDR_ENUM_RESOURCE_ENTRY Resources)
{
  ULONG v5; // edi
  ULONG v7; // esi
  PLDR_RESOURCE_INFO v8; // r15
  unsigned __int16 *v9; // rax
  unsigned __int16 *v10; // rbx
  int v12; // ecx
  unsigned int *v13; // r14
  int v14; // eax
  NTSTATUS v15; // ebp
  bool v16; // zf
  unsigned int v17; // ecx
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rdi
  ULONG_PTR v21; // rdi
  unsigned int *v22; // rbp
  int v23; // edx
  int v24; // eax
  unsigned int v25; // edx
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rsi
  ULONG_PTR v29; // rsi
  unsigned int *v30; // r15
  unsigned int v31; // r13d
  __int64 v32; // rcx
  ULONG_PTR v33; // rcx
  __int64 v34; // r8
  unsigned __int64 v35; // rdx
  PLDR_ENUM_RESOURCE_ENTRY v36; // r9
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
  v8 = ResourceInfo;
  v41 = 0;
  if ( Resources )
    v42 = *ResourceCount;
  else
    v42 = 0;
  *ResourceCount = 0;
  v9 = (unsigned __int16 *)RtlImageDirectoryEntryToData(DllHandle, 1u, 2u, &Size);
  v10 = v9;
  if ( !v9 )
    return -1073741687;
  v12 = v9[7];
  v13 = (unsigned int *)(v9 + 8);
  v14 = v9[6];
  v15 = 0;
  v16 = v14 + v12 == 0;
  v17 = v14 + v12;
  v45 = 0;
  v40 = v17;
  v44 = 0;
  if ( v16 )
  {
LABEL_37:
    *ResourceCount = v5;
    return v15;
  }
  while ( v7 )
  {
    v18 = LdrpCompareResourceNamesWithValidation(0LL, 0LL, v8->Type, v10, v13, &Size);
    v17 = v40;
    if ( !v18 )
      break;
LABEL_35:
    v13 += 2;
    if ( ++v44 >= v17 )
    {
      v5 = v41;
      v15 = v45;
      goto LABEL_37;
    }
  }
  v19 = v13[1];
  if ( (v19 & 0x80000000) != 0 )
  {
    v20 = *v13;
    if ( (v20 & 0x80000000) != 0 )
    {
      LODWORD(v20) = v20 & 0x7FFFFFFF;
      v21 = (ULONG_PTR)v10 + v20;
    }
    else
    {
      v21 = *(unsigned __int16 *)v13;
    }
    LODWORD(v19) = v19 & 0x7FFFFFFF;
    v43 = 0;
    v22 = (unsigned int *)((char *)v10 + v19 + 16);
    v23 = *(unsigned __int16 *)((char *)v10 + v19 + 14);
    v24 = *(unsigned __int16 *)((char *)v10 + v19 + 12);
    v16 = v24 + v23 == 0;
    v25 = v24 + v23;
    v39 = v25;
    if ( !v16 )
    {
      do
      {
        if ( v7 <= 1
          || (v26 = LdrpCompareResourceNamesWithValidation(0LL, 0LL, v8->Name, v10, v22, &v37), v25 = v39, !v26) )
        {
          v27 = v22[1];
          if ( (v27 & 0x80000000) == 0 )
            return -1073741701;
          v28 = *v22;
          if ( (v28 & 0x80000000) != 0 )
          {
            LODWORD(v28) = v28 & 0x7FFFFFFF;
            v29 = (ULONG_PTR)v10 + v28;
          }
          else
          {
            v29 = *(unsigned __int16 *)v22;
          }
          LODWORD(v27) = v27 & 0x7FFFFFFF;
          v30 = (unsigned int *)((char *)v10 + v27 + 16);
          v31 = 0;
          v46 = *(unsigned __int16 *)((char *)v10 + v27 + 12) + *(unsigned __int16 *)((char *)v10 + v27 + 14);
          if ( v46 )
          {
            do
            {
              if ( Level <= 2
                || !(unsigned int)LdrpCompareResourceNamesWithValidation(
                                    0LL,
                                    0LL,
                                    ResourceInfo->Language,
                                    v10,
                                    v30,
                                    v38) )
              {
                if ( (v30[1] & 0x80000000) != 0 )
                  return -1073741701;
                v32 = *v30;
                if ( (v32 & 0x80000000) != 0 )
                {
                  LODWORD(v32) = v32 & 0x7FFFFFFF;
                  v33 = (ULONG_PTR)v10 + v32;
                }
                else
                {
                  v33 = *(unsigned __int16 *)v30;
                }
                v34 = v30[1];
                v35 = v41++;
                if ( v41 > v42 )
                {
                  v45 = -1073741820;
                }
                else
                {
                  v36 = Resources;
                  Resources[v35].Path[0].NameOrId = v21;
                  v36[v35].Path[1].NameOrId = v29;
                  v36[v35].Path[2].NameOrId = v33;
                  v36[v35].Data = (char *)DllHandle + *(unsigned int *)((char *)v10 + v34);
                  *(_QWORD *)&v36[v35].Size = *(unsigned int *)((char *)v10 + v34 + 4);
                }
              }
              ++v31;
              v30 += 2;
            }
            while ( v31 < v46 );
            v25 = v39;
          }
          v8 = ResourceInfo;
          v7 = Level;
        }
        v22 += 2;
        ++v43;
      }
      while ( v43 < v25 );
      v17 = v40;
    }
    goto LABEL_35;
  }
  return -1073741701;
}
