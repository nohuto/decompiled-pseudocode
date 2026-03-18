/*
 * XREFs of EtwpGetTraceGuidInfo @ 0x14053DADC
 * Callers:
 *     NtTraceControl @ 0x1404CE420 (NtTraceControl.c)
 * Callees:
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     memset @ 0x140195A80 (memset.c)
 *     RtlULongAdd @ 0x1401E04A8 (RtlULongAdd.c)
 *     EtwpUnreferenceGuidEntry @ 0x1404CE13C (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1404CE270 (EtwpFindGuidEntryByGuid.c)
 */

__int64 __fastcall EtwpGetTraceGuidInfo(_DWORD *a1, int *a2, ULONG *a3)
{
  ULONG v3; // r13d
  int *v4; // r12
  int v5; // r14d
  int v7; // ebx
  char *GuidEntryByGuid; // rsi
  ULONG v10; // edi
  char *v11; // r9
  _DWORD *v12; // r14
  char v13; // r15
  __int64 v14; // r9
  char *v15; // r11
  _BYTE *v16; // rcx
  int v17; // r8d
  bool v18; // zf
  __int64 v19; // rdx
  __int64 v20; // r10
  unsigned int v21; // r15d
  __int64 v22; // r11
  _OWORD *v23; // r10
  __int64 v24; // r12
  _OWORD *v25; // r10
  __int64 v26; // r11
  char *v27; // r9
  int v28; // ecx
  __int64 v29; // rdx
  __int64 v30; // r8
  _DWORD *v31; // r9
  ULONG v32; // ecx
  int v33; // r15d
  unsigned int i; // r14d
  _OWORD *v35; // r10
  __int64 v36; // r11
  NTSTATUS v37; // eax
  __int64 v38; // r10
  int v39; // r11d
  ULONG pulResult; // [rsp+30h] [rbp-20h] BYREF
  int v41; // [rsp+34h] [rbp-1Ch]
  int v42; // [rsp+38h] [rbp-18h]
  ULONG v43; // [rsp+3Ch] [rbp-14h]
  _BYTE *v44; // [rsp+40h] [rbp-10h]

  v3 = *a3;
  v4 = a2;
  v5 = 0;
  v41 = 0;
  v7 = 0;
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, 0);
  if ( !GuidEntryByGuid )
    return 3221226133LL;
  memset(v4, 0, *a3);
  KeWaitForSingleObject(&EtwpNotificationMutex, Executive, 0, 0, 0LL);
  v10 = 8;
  v11 = (char *)*((_QWORD *)GuidEntryByGuid + 5);
  pulResult = 8;
  if ( v11 == GuidEntryByGuid + 40 )
  {
LABEL_45:
    KeReleaseMutex(&EtwpNotificationMutex, 0);
    if ( v5 )
      goto LABEL_40;
    v5 = 2;
    v41 = 2;
    if ( RtlULongAdd(v10, 0x10u, &pulResult) < 0 )
    {
      v10 = pulResult;
      v7 = -2147483643;
      goto LABEL_40;
    }
    v32 = pulResult;
    v33 = 0;
    for ( i = 0; i < 8; ++i )
    {
      if ( *(_DWORD *)&GuidEntryByGuid[32 * i + 112] )
      {
        ++v33;
        if ( RtlULongAdd(v32, 0x20u, &pulResult) < 0 )
          goto LABEL_59;
        v32 = pulResult;
        if ( pulResult <= v3 )
        {
          *v35 = *(_OWORD *)&GuidEntryByGuid[v36 + 112];
          v35[1] = *(_OWORD *)&GuidEntryByGuid[v36 + 128];
        }
      }
    }
    if ( v32 <= v3 )
    {
      v31[2] = 0;
      v31[1] = v33;
      *v31 = v32 - v10;
      v31[3] = 2;
    }
    if ( RtlULongAdd(v32, 0x10u, &pulResult) < 0 )
    {
LABEL_59:
      v7 = -2147483643;
      goto LABEL_38;
    }
    v37 = RtlULongAdd(pulResult, 0x20u, &pulResult);
    v10 = pulResult;
    if ( v37 < 0 )
    {
      v7 = -2147483643;
      goto LABEL_39;
    }
    if ( pulResult <= v3 )
    {
      v31[2] = 0;
      v31[1] = 0;
      *v31 = 0;
      v31[3] = 3;
      *(_DWORD *)v38 = (unsigned __int8)(v39 & GuidEntryByGuid[75]);
      v5 = v41;
      if ( ((unsigned __int8)v39 & (unsigned __int8)GuidEntryByGuid[75]) != 0 )
      {
        v31[1] = v39;
        *(_BYTE *)(v38 + 4) = GuidEntryByGuid[74];
        *(_QWORD *)(v38 + 16) = *((_QWORD *)GuidEntryByGuid + 8);
        *(_WORD *)(v38 + 6) = *((_WORD *)GuidEntryByGuid + 36);
      }
      goto LABEL_40;
    }
  }
  else
  {
    while ( 1 )
    {
      v43 = v10;
      v12 = (int *)((char *)v4 + v10);
      v13 = 0;
      if ( RtlULongAdd(v10, 0x10u, &pulResult) < 0 )
        break;
      v10 = pulResult;
      v16 = (_BYTE *)(v14 + 98);
      ++v41;
      v17 = 0;
      v18 = (*(_BYTE *)(v14 + 98) & 8) == 0;
      v19 = v14;
      v42 = 0;
      v44 = (_BYTE *)(v14 + 98);
      if ( v18 )
      {
        if ( *(_BYTE *)(v14 + 99) || *(_BYTE *)(v14 + 100) )
        {
          v21 = 0;
          while ( 1 )
          {
            v22 = 32LL * v21;
            if ( *(_DWORD *)&GuidEntryByGuid[v22 + 112] && ((unsigned __int8)(1 << v21) & *(_BYTE *)(v14 + 99)) != 0 )
            {
              v42 = v17 + 1;
              if ( RtlULongAdd(v10, 0x20u, &pulResult) < 0 )
                goto LABEL_36;
              v10 = pulResult;
              v17 = v42;
              if ( pulResult <= v3 )
              {
                *v23 = *(_OWORD *)&GuidEntryByGuid[v22 + 112];
                v23[1] = *(_OWORD *)&GuidEntryByGuid[v22 + 128];
              }
            }
            v24 = *(_QWORD *)(v14 + 40);
            if ( v24 && *(_DWORD *)(v24 + v22 + 112) && ((unsigned __int8)(1 << v21) & *(_BYTE *)(v14 + 100)) != 0 )
            {
              v42 = v17 + 1;
              if ( RtlULongAdd(v10, 0x20u, &pulResult) < 0 )
              {
LABEL_36:
                v4 = a2;
                goto LABEL_37;
              }
              v10 = pulResult;
              if ( pulResult <= v3 )
              {
                *v25 = *(_OWORD *)(v24 + v26 + 112);
                v25[1] = *(_OWORD *)(v24 + v26 + 128);
              }
            }
            v17 = v42;
            if ( ++v21 >= 8 )
            {
              v4 = a2;
              v15 = GuidEntryByGuid + 40;
              v16 = v44;
              v13 = 0;
              v19 = v14;
              break;
            }
          }
        }
      }
      else
      {
        v13 = 1;
        if ( (GuidEntryByGuid[75] & 1) != 0 )
        {
          v42 = 1;
          if ( RtlULongAdd(pulResult, 0x20u, &pulResult) < 0 )
            break;
          v10 = pulResult;
          v19 = v14;
          v17 = v42;
          v16 = v44;
          if ( pulResult <= v3 )
          {
            *(_DWORD *)v20 = 1;
            *(_BYTE *)(v20 + 4) = GuidEntryByGuid[74];
            *(_QWORD *)(v20 + 16) = *((_QWORD *)GuidEntryByGuid + 8);
            *(_WORD *)(v20 + 6) = *((_WORD *)GuidEntryByGuid + 36);
          }
        }
      }
      v27 = *(char **)v14;
      if ( v10 <= v3 )
      {
        if ( v13 == 1 )
          v12[3] = 1;
        if ( (*v16 & 2) != 0 )
          v28 = *(_DWORD *)(*(_QWORD *)(v19 + 80) + 744LL);
        else
          v28 = 0;
        v12[2] = v28;
        v12[1] = v17;
        if ( v27 == v15 )
        {
          *v12 = 0;
LABEL_44:
          v5 = v41;
          goto LABEL_45;
        }
        *v12 = v10 - v43;
      }
      if ( v27 == v15 )
        goto LABEL_44;
    }
LABEL_37:
    v7 = -2147483643;
    KeReleaseMutex(&EtwpNotificationMutex, 0);
LABEL_38:
    v10 = pulResult;
  }
LABEL_39:
  v5 = v41;
LABEL_40:
  EtwpUnreferenceGuidEntry((__int64 *)GuidEntryByGuid, v29, v30, (__int64)v31);
  if ( v7 >= 0 )
  {
    if ( v10 > v3 )
      v7 = -1073741789;
    else
      *v4 = v5;
  }
  *a3 = v10;
  return (unsigned int)v7;
}
