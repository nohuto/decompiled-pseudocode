/*
 * XREFs of BiBuildIdentifierList @ 0x1406D3B60
 * Callers:
 *     BiBindEfiNamespaceObjects @ 0x1406D3AF8 (BiBindEfiNamespaceObjects.c)
 *     BiExportStoreAlterationsToEfi @ 0x1406D4EEC (BiExportStoreAlterationsToEfi.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlGUIDFromString @ 0x1404DE2FC (RtlGUIDFromString.c)
 *     BiEnumerateSubKeys @ 0x14053C7E0 (BiEnumerateSubKeys.c)
 *     BcdOpenObject @ 0x14053DA8C (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14053DBA4 (BcdCloseObject.c)
 *     BiGetObjectDescription @ 0x14053DD94 (BiGetObjectDescription.c)
 *     BiOpenKey @ 0x14053E38C (BiOpenKey.c)
 *     BiCloseKey @ 0x14053E50C (BiCloseKey.c)
 *     BiEnumerateBootEntries @ 0x1406D4A18 (BiEnumerateBootEntries.c)
 *     BiFreeIdentifierList @ 0x1406D4F58 (BiFreeIdentifierList.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1406D52C4 (BiGetObjectReferenceFromEfiEntry.c)
 *     BiGetSavedBootEntry @ 0x1406D544C (BiGetSavedBootEntry.c)
 *     BiLookupObjectByBootEntry @ 0x1406D5640 (BiLookupObjectByBootEntry.c)
 *     BiLookupObjectByIdentifierAndBootEntry @ 0x1406D5668 (BiLookupObjectByIdentifierAndBootEntry.c)
 */

__int64 __fastcall BiBuildIdentifierList(_QWORD *BcdStoreHandle, __int64 a2, _QWORD *a3)
{
  PCWSTR *v4; // rsi
  HANDLE v5; // r14
  int v6; // ebx
  unsigned int v7; // r12d
  __int64 v8; // r15
  PCWSTR *v9; // r13
  HANDLE v10; // r14
  int v11; // esi
  GUID *PoolWithTag; // rax
  GUID *v13; // rbx
  GUID **v14; // rax
  GUID **v15; // rax
  PVOID v16; // rcx
  int v17; // eax
  _BYTE *v18; // r15
  unsigned int *v19; // rsi
  unsigned __int64 v20; // r12
  _QWORD *v21; // rbx
  __int64 v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  _DWORD *v27; // rax
  _DWORD *v28; // r14
  __int64 v29; // rax
  _QWORD *v30; // rbx
  _QWORD *v31; // rsi
  _OWORD *v32; // rcx
  _QWORD *v33; // rdx
  PVOID *v34; // rax
  __int64 v35; // rcx
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  _QWORD *v38; // rcx
  GUID *v39; // rax
  _QWORD *v40; // rcx
  GUID *v41; // rax
  _QWORD *v42; // rdx
  _QWORD *v43; // rax
  _QWORD *v45; // [rsp+20h] [rbp-69h] BYREF
  _QWORD **v46; // [rsp+28h] [rbp-61h]
  _QWORD *v47; // [rsp+30h] [rbp-59h] BYREF
  PCWSTR *v48; // [rsp+38h] [rbp-51h] BYREF
  _QWORD *v49; // [rsp+40h] [rbp-49h] BYREF
  GUID *v50; // [rsp+48h] [rbp-41h]
  _QWORD *v51; // [rsp+50h] [rbp-39h] BYREF
  GUID *v52; // [rsp+58h] [rbp-31h]
  HANDLE BcdObjectHandle; // [rsp+60h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-21h] BYREF
  PVOID P; // [rsp+70h] [rbp-19h] BYREF
  PVOID v56; // [rsp+78h] [rbp-11h] BYREF
  int v57; // [rsp+80h] [rbp-9h] BYREF
  int v58; // [rsp+84h] [rbp-5h]
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-1h] BYREF
  GUID Guid; // [rsp+98h] [rbp+Fh] BYREF

  v56 = 0LL;
  Handle = 0LL;
  v52 = (GUID *)&v51;
  a3[1] = a3;
  v51 = &v51;
  *a3 = a3;
  v50 = (GUID *)&v49;
  v4 = 0LL;
  v47 = BcdStoreHandle;
  v49 = &v49;
  v48 = 0LL;
  v46 = &v45;
  v5 = BcdStoreHandle;
  v45 = &v45;
  v6 = BiOpenKey(BcdStoreHandle, L"Objects", 0x20019u, &Handle);
  if ( v6 >= 0 )
  {
    v6 = BiEnumerateSubKeys(Handle, &v48, (ULONG *)&BcdObjectHandle);
    if ( v6 < 0 )
      goto LABEL_57;
    v7 = (unsigned int)BcdObjectHandle;
    v8 = 0LL;
    if ( (_DWORD)BcdObjectHandle )
    {
      v9 = v48;
      do
      {
        RtlInitUnicodeString(&DestinationString, v9[v8]);
        if ( RtlGUIDFromString(&DestinationString, &Guid) >= 0 && BcdOpenObject(v5, &Guid, &BcdObjectHandle) >= 0 )
        {
          v10 = BcdObjectHandle;
          if ( (int)BiGetObjectDescription((__int64)BcdObjectHandle, &v57) >= 0
            && (v58 & 0xF0000000) == 0x10000000
            && (v58 & 0xF00000) == 0x100000 )
          {
            v11 = v58 & 0xFFFFF;
            if ( (v58 & 0xFFFFF) != 1 )
            {
              PoolWithTag = (GUID *)ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x4B444342u);
              v13 = PoolWithTag;
              if ( !PoolWithTag )
              {
                BcdCloseObject(v10);
                v6 = -1073741670;
                goto LABEL_57;
              }
              memset(PoolWithTag, 0, 0x38uLL);
              v13[1] = Guid;
              v13[3].Data1 |= 4u;
              if ( v11 == 0xFFFFF )
              {
                v13[3].Data1 |= 8u;
                v14 = (GUID **)v50;
                if ( *(_QWORD ***)&v50->Data1 != &v49 )
                  __fastfail(3u);
                *(_QWORD *)v13->Data4 = v50;
                *(_QWORD *)&v13->Data1 = &v49;
                *v14 = v13;
                v50 = v13;
              }
              else
              {
                v15 = (GUID **)v52;
                if ( *(_QWORD ***)&v52->Data1 != &v51 )
                  __fastfail(3u);
                *(_QWORD *)v13->Data4 = v52;
                *(_QWORD *)&v13->Data1 = &v51;
                *v15 = v13;
                v52 = v13;
              }
              if ( (int)BiGetSavedBootEntry(v10, &P) >= 0 )
              {
                v16 = P;
                v13[2].Data1 = *((_DWORD *)P + 2);
                v13[3].Data1 |= 2u;
                ExFreePoolWithTag(v16, 0x4B444342u);
              }
            }
          }
          BcdCloseObject(v10);
          v5 = v47;
        }
        v8 = (unsigned int)(v8 + 1);
      }
      while ( (unsigned int)v8 < v7 );
    }
    v17 = BiEnumerateBootEntries(&v56, &BcdObjectHandle);
    v18 = v56;
    v6 = v17;
    if ( v17 >= 0 )
    {
      v47 = 0LL;
      v19 = (unsigned int *)v56;
      v20 = (unsigned int)BcdObjectHandle;
      if ( (_DWORD)BcdObjectHandle )
      {
        while ( 1 )
        {
          if ( (int)BiGetObjectReferenceFromEfiEntry(v19 + 1, &Guid) < 0
            || (int)BiLookupObjectByIdentifierAndBootEntry(&v51, &Guid, v19[3], &v47) < 0 )
          {
            v25 = ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x4B444342u);
            v47 = v25;
            v21 = v25;
            if ( !v25 )
              break;
            memset(v25, 0, 0x38uLL);
            *((_DWORD *)v21 + 12) |= 8u;
            v26 = v46;
            if ( *v46 != &v45 )
              __fastfail(3u);
            v21[1] = v46;
            *v21 = &v45;
            *v26 = v21;
            v46 = (_QWORD **)v21;
          }
          else
          {
            v21 = v47;
            v22 = *v47;
            v23 = (_QWORD *)v47[1];
            if ( *(_QWORD **)(*v47 + 8LL) != v47 || (_QWORD *)*v23 != v47 )
              __fastfail(3u);
            *v23 = v22;
            *(_QWORD *)(v22 + 8) = v23;
            v24 = (_QWORD *)a3[1];
            if ( (_QWORD *)*v24 != a3 )
              __fastfail(3u);
            *v21 = a3;
            v21[1] = v24;
            *v24 = v21;
            a3[1] = v21;
          }
          v27 = ExAllocatePoolWithTag(PagedPool, v19[2], 0x4B444342u);
          v28 = v27;
          if ( !v27 )
            break;
          memmove(v27, v19 + 1, v19[2]);
          v21[5] = v28;
          *((_DWORD *)v21 + 8) = v28[2];
          *((_DWORD *)v21 + 12) |= 1u;
          v29 = *v19;
          if ( (_DWORD)v29 )
          {
            v19 = (unsigned int *)((char *)v19 + v29);
            if ( (char *)v19 - v18 < v20 )
              continue;
          }
          goto LABEL_38;
        }
        v6 = -1073741670;
      }
      else
      {
LABEL_38:
        v30 = v45;
        if ( v45 != &v45 )
        {
          do
          {
            v31 = v30;
            v30 = (_QWORD *)*v30;
            if ( (int)BiLookupObjectByBootEntry(&v49, *((unsigned int *)v31 + 8), &P) >= 0 )
            {
              v32 = P;
              v33 = *(_QWORD **)P;
              v34 = (PVOID *)*((_QWORD *)P + 1);
              if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P || *v34 != P )
                __fastfail(3u);
              *v34 = v33;
              v33[1] = v34;
              *((_OWORD *)v31 + 1) = v32[1];
              *((_DWORD *)v31 + 12) ^= (*((_DWORD *)v31 + 12) ^ *((_DWORD *)v32 + 12)) & 2;
              ExFreePoolWithTag(v32, 0x4B444342u);
              *((_DWORD *)v31 + 12) |= 4u;
              v35 = *v31;
              v36 = (_QWORD *)v31[1];
              if ( *(_QWORD **)(*v31 + 8LL) != v31 || (_QWORD *)*v36 != v31 )
                __fastfail(3u);
              *v36 = v35;
              *(_QWORD *)(v35 + 8) = v36;
              v37 = (_QWORD *)a3[1];
              if ( (_QWORD *)*v37 != a3 )
                __fastfail(3u);
              *v31 = a3;
              v31[1] = v37;
              *v37 = v31;
              a3[1] = v31;
            }
          }
          while ( v30 != &v45 );
          v30 = v45;
        }
        if ( v51 != &v51 )
        {
          v38 = (_QWORD *)a3[1];
          *v38 = v51;
          v39 = v52;
          a3[1] = v52;
          *(_QWORD *)&v39->Data1 = a3;
          v51[1] = v38;
          v30 = v45;
        }
        if ( v49 != &v49 )
        {
          v40 = (_QWORD *)a3[1];
          *v40 = v49;
          v41 = v50;
          a3[1] = v50;
          *(_QWORD *)&v41->Data1 = a3;
          v49[1] = v40;
          v30 = v45;
        }
        if ( v30 != &v45 )
        {
          v42 = (_QWORD *)a3[1];
          *v42 = v30;
          v43 = v46;
          a3[1] = v46;
          *v43 = a3;
          v45[1] = v42;
        }
        v6 = 0;
      }
    }
    if ( v18 )
      ExFreePoolWithTag(v18, 0x4B444342u);
LABEL_57:
    v4 = v48;
  }
  if ( Handle )
    BiCloseKey(Handle);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x4B444342u);
  if ( v6 < 0 )
  {
    BiFreeIdentifierList(&v45);
    BiFreeIdentifierList(&v49);
    BiFreeIdentifierList(&v51);
    BiFreeIdentifierList(a3);
  }
  return (unsigned int)v6;
}
