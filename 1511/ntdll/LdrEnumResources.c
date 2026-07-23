/*
 * XREFs of LdrEnumResources @ 0x1800D39B0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpCompareResourceNames_U @ 0x1800312D0 (LdrpCompareResourceNames_U.c)
 *     RtlImageDirectoryEntryToData @ 0x180032000 (RtlImageDirectoryEntryToData.c)
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
  const wchar_t **v8; // r15
  unsigned __int16 *v9; // rax
  __int64 v10; // rbx
  int v12; // ecx
  int *v13; // r14
  int v14; // eax
  NTSTATUS v15; // ebp
  bool v16; // zf
  unsigned int v17; // ecx
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rdi
  ULONG_PTR v21; // rdi
  int *v22; // rbp
  int v23; // edx
  int v24; // eax
  ULONG v25; // edx
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rsi
  ULONG_PTR v29; // rsi
  int *v30; // r15
  unsigned int v31; // r13d
  __int64 v32; // rcx
  ULONG_PTR v33; // rcx
  __int64 v34; // r8
  unsigned __int64 v35; // rdx
  PLDR_ENUM_RESOURCE_ENTRY v36; // r9
  unsigned int v37; // [rsp+20h] [rbp-68h]
  ULONG v38; // [rsp+24h] [rbp-64h]
  ULONG v39; // [rsp+28h] [rbp-60h]
  ULONG v40; // [rsp+2Ch] [rbp-5Ch]
  int v41; // [rsp+30h] [rbp-58h]
  int v42; // [rsp+34h] [rbp-54h]
  unsigned int v43; // [rsp+38h] [rbp-50h]
  ULONG Size; // [rsp+A8h] [rbp+20h] BYREF

  v5 = 0;
  v7 = Level;
  v8 = (const wchar_t **)ResourceInfo;
  v38 = 0;
  if ( Resources )
    v39 = *ResourceCount;
  else
    v39 = 0;
  *ResourceCount = 0;
  v9 = (unsigned __int16 *)RtlImageDirectoryEntryToData(DllHandle, 1u, 2u, &Size);
  v10 = (__int64)v9;
  if ( !v9 )
    return -1073741687;
  v12 = v9[7];
  v13 = (int *)(v9 + 8);
  v14 = v9[6];
  v15 = 0;
  v16 = v14 + v12 == 0;
  v17 = v14 + v12;
  v42 = 0;
  v37 = v17;
  v41 = 0;
  if ( v16 )
  {
LABEL_37:
    *ResourceCount = v5;
    return v15;
  }
  while ( v7 )
  {
    v18 = LdrpCompareResourceNames_U(*v8, v10, v13);
    v17 = v37;
    if ( !v18 )
      break;
LABEL_35:
    v13 += 2;
    if ( ++v41 >= v17 )
    {
      v5 = v38;
      v15 = v42;
      goto LABEL_37;
    }
  }
  v19 = (unsigned int)v13[1];
  if ( (v19 & 0x80000000) != 0 )
  {
    v20 = (unsigned int)*v13;
    if ( (v20 & 0x80000000) != 0 )
    {
      LODWORD(v20) = v20 & 0x7FFFFFFF;
      v21 = v10 + v20;
    }
    else
    {
      v21 = *(unsigned __int16 *)v13;
    }
    LODWORD(v19) = v19 & 0x7FFFFFFF;
    v40 = 0;
    v22 = (int *)(v19 + v10 + 16);
    v23 = *(unsigned __int16 *)(v19 + v10 + 14);
    v24 = *(unsigned __int16 *)(v19 + v10 + 12);
    v16 = v24 + v23 == 0;
    v25 = v24 + v23;
    Size = v25;
    if ( !v16 )
    {
      do
      {
        if ( v7 <= 1 || (v26 = LdrpCompareResourceNames_U(v8[1], v10, v22), v25 = Size, !v26) )
        {
          v27 = (unsigned int)v22[1];
          if ( (v27 & 0x80000000) == 0 )
            return -1073741701;
          v28 = (unsigned int)*v22;
          if ( (v28 & 0x80000000) != 0 )
          {
            LODWORD(v28) = v28 & 0x7FFFFFFF;
            v29 = v10 + v28;
          }
          else
          {
            v29 = *(unsigned __int16 *)v22;
          }
          LODWORD(v27) = v27 & 0x7FFFFFFF;
          v30 = (int *)(v27 + v10 + 16);
          v31 = 0;
          v43 = *(unsigned __int16 *)(v27 + v10 + 12) + *(unsigned __int16 *)(v27 + v10 + 14);
          if ( v43 )
          {
            do
            {
              if ( Level <= 2
                || !(unsigned int)LdrpCompareResourceNames_U((const wchar_t *)ResourceInfo->Language, v10, v30) )
              {
                if ( v30[1] < 0 )
                  return -1073741701;
                v32 = (unsigned int)*v30;
                if ( (v32 & 0x80000000) != 0 )
                {
                  LODWORD(v32) = v32 & 0x7FFFFFFF;
                  v33 = v10 + v32;
                }
                else
                {
                  v33 = *(unsigned __int16 *)v30;
                }
                v34 = (unsigned int)v30[1];
                v35 = v38++;
                if ( v38 > v39 )
                {
                  v42 = -1073741820;
                }
                else
                {
                  v36 = Resources;
                  Resources[v35].Path[0].NameOrId = v21;
                  v36[v35].Path[1].NameOrId = v29;
                  v36[v35].Path[2].NameOrId = v33;
                  v36[v35].Data = (char *)DllHandle + *(unsigned int *)(v34 + v10);
                  *(_QWORD *)&v36[v35].Size = *(unsigned int *)(v34 + v10 + 4);
                }
              }
              ++v31;
              v30 += 2;
            }
            while ( v31 < v43 );
            v25 = Size;
          }
          v8 = (const wchar_t **)ResourceInfo;
          v7 = Level;
        }
        v22 += 2;
        ++v40;
      }
      while ( v40 < v25 );
      v17 = v37;
    }
    goto LABEL_35;
  }
  return -1073741701;
}
