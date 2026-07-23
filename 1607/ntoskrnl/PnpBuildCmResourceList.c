/*
 * XREFs of PnpBuildCmResourceList @ 0x14055690C
 * Callers:
 *     PnpBuildCmResourceLists @ 0x140556118 (PnpBuildCmResourceLists.c)
 *     IopAllocateBootResourcesInternal @ 0x140556700 (IopAllocateBootResourcesInternal.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1400C17B0 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ObQueryNameStringMode @ 0x140433A60 (ObQueryNameStringMode.c)
 *     IopCreateRegistryKeyEx @ 0x140539738 (IopCreateRegistryKeyEx.c)
 *     IopChildToRootTranslation @ 0x140556D90 (IopChildToRootTranslation.c)
 *     IopParentToRawTranslation @ 0x140556F24 (IopParentToRawTranslation.c)
 *     IopWriteResourceList @ 0x140557C10 (IopWriteResourceList.c)
 */

int __fastcall PnpBuildCmResourceList(__int64 a1, int a2)
{
  __int64 v2; // r15
  __int64 v3; // rbx
  int v4; // edi
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 *v7; // rdx
  __int64 v8; // r8
  PVOID PoolWithTag; // rax
  _DWORD *v10; // r14
  _DWORD *v11; // rax
  _DWORD *v12; // r12
  _DWORD *v13; // rsi
  int v14; // eax
  _DWORD *v15; // r15
  __int64 v16; // rdi
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // r13d
  _DWORD *v22; // rcx
  int v23; // eax
  _WORD *v24; // rdi
  int v25; // r13d
  __int16 v26; // ax
  char *v27; // rdi
  int v28; // eax
  HANDLE v29; // rdi
  wchar_t *Buffer; // rax
  unsigned int v31; // esi
  __int64 v32; // rax
  bool v33; // zf
  int v35; // [rsp+38h] [rbp-D0h]
  int v36; // [rsp+3Ch] [rbp-CCh]
  int v37; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v38; // [rsp+44h] [rbp-C4h]
  _QWORD v39[2]; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING Destination_8; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-A0h] BYREF
  PVOID P[3]; // [rsp+70h] [rbp-98h] BYREF
  UNICODE_STRING v43; // [rsp+88h] [rbp-80h] BYREF
  char v44; // [rsp+98h] [rbp-70h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  v37 = a2;
  v3 = a1;
  *(_QWORD *)&Destination_8.Length = a1;
  v4 = 0;
  v5 = **(_QWORD **)(v2 + 16);
  v39[0] = v5;
  LODWORD(v6) = *(_DWORD *)(v5 + 20);
  if ( !(_DWORD)v6 )
    goto LABEL_43;
  v7 = (__int64 *)(v5 + 24);
  v8 = (unsigned int)v6;
  do
  {
    v6 = *v7++;
    v4 += *(_DWORD *)(v6 + 276) + 1;
    --v8;
  }
  while ( v8 );
  if ( !v4 )
  {
LABEL_43:
    *(_DWORD *)(a1 + 56) = -1073741595;
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_QWORD *)(a1 + 48) = 0LL;
    return v6;
  }
  v38 = 20 * (v4 + 1);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v38, 0x20207050u);
  Handle = PoolWithTag;
  v10 = PoolWithTag;
  if ( !PoolWithTag )
  {
    LODWORD(v6) = -1073741670;
    *(_QWORD *)(v3 + 40) = 0LL;
    *(_DWORD *)(v3 + 56) = -1073741670;
    *(_QWORD *)(v3 + 48) = 0LL;
    return v6;
  }
  memset(PoolWithTag, 0, v38);
  v11 = ExAllocatePoolWithTag(PagedPool, v38, 0x20207050u);
  v12 = v11;
  if ( !v11 )
  {
    ExFreePoolWithTag(v10, 0);
    *(_QWORD *)(v3 + 40) = 0LL;
    LODWORD(v6) = -1073741670;
    *(_QWORD *)(v3 + 48) = 0LL;
    *(_DWORD *)(v3 + 56) = -1073741670;
    return v6;
  }
  memset(v11, 0, v38);
  v13 = v10 + 5;
  *v10 = 1;
  v10[1] = *(_DWORD *)v2;
  v10[2] = *(_DWORD *)(v2 + 4);
  v10[3] = 65537;
  v10[4] = v4;
  *v12 = 1;
  v12[1] = *(_DWORD *)v2;
  v14 = *(_DWORD *)(v2 + 4);
  v15 = v12 + 5;
  v12[2] = v14;
  v12[3] = 65537;
  v12[4] = v4;
  v6 = 0LL;
  v36 = 0;
  if ( !*(_DWORD *)(v5 + 20) )
  {
LABEL_20:
    if ( v37 )
    {
      v27 = *(char **)v3;
      LODWORD(v6) = IopCreateRegistryKeyEx(&Handle, 0LL, &CmRegistryMachineHardwareResourceMapName, 0x2001Fu, 1u, 0LL);
      if ( (int)v6 >= 0 )
      {
        LODWORD(v39[0]) = 1572886;
        v39[1] = L"PnP Manager";
        LODWORD(P[0]) = 1441812;
        P[1] = L"PnpManager";
        v28 = ObQueryNameStringMode(v27, (__int64)&v43, 0x200u, &v37, 0);
        v29 = Handle;
        if ( v28 >= 0 )
        {
          v43.MaximumLength = 496;
          Buffer = (wchar_t *)&v44;
          if ( v43.Length )
            Buffer = v43.Buffer;
          v43.Buffer = Buffer;
          Destination_8 = v43;
          RtlAppendUnicodeToString(&Destination_8, L".Raw");
          v31 = v38;
          if ( (int)IopWriteResourceList(v29, v39, P, &Destination_8, v12, v38) >= 0 )
          {
            Destination_8 = v43;
            RtlAppendUnicodeToString(&Destination_8, L".Translated");
            IopWriteResourceList(v29, v39, P, &Destination_8, v10, v31);
          }
        }
        LODWORD(v6) = ZwClose(v29);
      }
    }
    *(_QWORD *)(v3 + 40) = v12;
    *(_QWORD *)(v3 + 48) = v10;
    return v6;
  }
  while ( 1 )
  {
    v16 = *(_QWORD *)(v5 + 8 * v6 + 24);
    if ( !*(_BYTE *)(v16 + 8) )
    {
      *(_OWORD *)v15 = *(_OWORD *)(v16 + 136);
      v15[4] = *(_DWORD *)(v16 + 152);
      v15 += 5;
      *(_OWORD *)v13 = *(_OWORD *)(v16 + 136);
      v13[4] = *(_DWORD *)(v16 + 152);
      v13 += 5;
      goto LABEL_18;
    }
    v17 = *(_QWORD *)(v16 + 32);
    if ( *(_DWORD *)(v17 + 128) == 2 )
    {
      v18 = *(_QWORD *)(v17 + 112);
    }
    else
    {
      v35 = IopParentToRawTranslation(*(_QWORD *)(v16 + 32), 0LL, 20LL);
      if ( v35 < 0 )
      {
        ExFreePoolWithTag(v10, 0);
        ExFreePoolWithTag(v12, 0);
        v33 = v35 == -1073741267;
        goto LABEL_40;
      }
      v18 = *(_QWORD *)(v16 + 112);
    }
    *(_OWORD *)v15 = *(_OWORD *)v18;
    v15[4] = *(_DWORD *)(v18 + 16);
    v15 += 5;
    if ( *(_DWORD *)(v17 + 128) == 2 )
    {
      v32 = *(_QWORD *)(v17 + 112);
      *(_OWORD *)v13 = *(_OWORD *)v32;
      v13[4] = *(_DWORD *)(v32 + 16);
      goto LABEL_17;
    }
    v19 = *(_QWORD *)(v16 + 72);
    if ( v19 )
      v20 = *(_QWORD *)(*(_QWORD *)(v19 + 312) + 40LL);
    else
      LODWORD(v20) = 0;
    v21 = IopChildToRootTranslation(
            v20,
            *(_DWORD *)v16,
            *(_DWORD *)(v16 + 4),
            *(_DWORD *)(v16 + 80),
            v16 + 136,
            (__int64)P);
    if ( v21 < 0 )
      break;
    v22 = P[0];
    *(_OWORD *)v13 = *(_OWORD *)P[0];
    v13[4] = v22[4];
    ExFreePoolWithTag(v22, 0);
LABEL_17:
    v5 = v39[0];
    v13 += 5;
LABEL_18:
    v23 = *(_DWORD *)(v16 + 276);
    if ( v23 )
    {
      v24 = (_WORD *)(*(_QWORD *)(v16 + 280) + 8LL);
      v25 = v23;
      do
      {
        *(_BYTE *)v15 = -127;
        *(_BYTE *)v13 = -127;
        *((_BYTE *)v15 + 1) = 1;
        *((_BYTE *)v13 + 1) = 1;
        v26 = *(v24 - 2);
        *((_WORD *)v15 + 1) = v26;
        *((_WORD *)v13 + 1) = v26;
        memmove(v15 + 1, v24, 0xCuLL);
        memmove(v13 + 1, v24, 0xCuLL);
        v24 += 16;
        v15 += 5;
        v13 += 5;
        --v25;
      }
      while ( v25 );
      v3 = *(_QWORD *)&Destination_8.Length;
      v10 = Handle;
      v5 = v39[0];
    }
    v6 = (unsigned int)(v36 + 1);
    v36 = v6;
    if ( (unsigned int)v6 >= *(_DWORD *)(v5 + 20) )
      goto LABEL_20;
  }
  ExFreePoolWithTag(v10, 0);
  ExFreePoolWithTag(v12, 0);
  v33 = v21 == -1073741267;
LABEL_40:
  LODWORD(v6) = -1073741670;
  if ( v33 )
    LODWORD(v6) = -1073741267;
  *(_QWORD *)(v3 + 40) = 0LL;
  *(_DWORD *)(v3 + 56) = v6;
  return v6;
}
