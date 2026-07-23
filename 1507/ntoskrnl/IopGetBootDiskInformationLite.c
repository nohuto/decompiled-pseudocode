/*
 * XREFs of IopGetBootDiskInformationLite @ 0x1407CDCA8
 * Callers:
 *     IoGetBootDiskInformationLite @ 0x140597C60 (IoGetBootDiskInformationLite.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 *     RtlInitAnsiString @ 0x1400F001C (RtlInitAnsiString.c)
 *     IopAddBootDiskInformation @ 0x140161718 (IopAddBootDiskInformation.c)
 *     IopCheckDiskName @ 0x14016178C (IopCheckDiskName.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     VhdiGetDiskParameters @ 0x1407FC834 (VhdiGetDiskParameters.c)
 */

__int64 __fastcall IopGetBootDiskInformationLite(unsigned int **a1)
{
  __int64 v1; // rbx
  unsigned int v3; // edi
  char v4; // r12
  char v5; // r15
  _QWORD *v6; // r14
  _QWORD *v7; // rax
  int v8; // edx
  SIZE_T v9; // rbx
  unsigned int *PoolWithTagPriority; // rax
  unsigned int *v11; // rsi
  _QWORD *i; // rbx
  __int64 v13; // rcx
  __int128 v15; // xmm0
  __int128 v16; // xmm0
  int v17; // [rsp+20h] [rbp-B9h] BYREF
  ULONG v18; // [rsp+24h] [rbp-B5h]
  __int128 v19; // [rsp+28h] [rbp-B1h]
  int v20; // [rsp+38h] [rbp-A1h]
  _STRING v21; // [rsp+40h] [rbp-99h] BYREF
  _STRING v22; // [rsp+50h] [rbp-89h] BYREF
  _STRING DestinationString; // [rsp+60h] [rbp-79h] BYREF
  _DWORD v24[48]; // [rsp+70h] [rbp-69h] BYREF
  ULONG v25; // [rsp+148h] [rbp+6Fh] BYREF
  __int128 *v26; // [rsp+150h] [rbp+77h] BYREF
  char v27; // [rsp+158h] [rbp+7Fh] BYREF

  v1 = KeLoaderBlock_0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = *(_QWORD **)(KeLoaderBlock_0 + 232);
  RtlInitAnsiString(&DestinationString, *(PCSZ *)(KeLoaderBlock_0 + 184));
  RtlInitAnsiString(&v22, *(PCSZ *)(v1 + 192));
  v7 = (_QWORD *)*v6;
  v8 = 2;
  while ( v6 != v7 )
  {
    if ( v7[7] )
      ++v8;
    v7 = (_QWORD *)*v7;
  }
  v9 = (unsigned int)(28 * v8 + 4);
  if ( ViVerifierDriverAddedThunkListHead )
    PoolWithTagPriority = (unsigned int *)ExAllocatePoolWithTagPriority(
                                            NonPagedPoolNx,
                                            v9,
                                            0x20206F49u,
                                            (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    PoolWithTagPriority = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x20206F49u);
  v11 = PoolWithTagPriority;
  if ( PoolWithTagPriority )
  {
    memset(PoolWithTagPriority, 0, v9);
    for ( i = (_QWORD *)*v6; v6 != i; i = (_QWORD *)*i )
    {
      RtlInitAnsiString(&v21, (PCSZ)i[3]);
      if ( !v4 && IopCheckDiskName(&v21, &DestinationString, &v25) )
      {
        v4 = 1;
        v18 = v25;
        v20 = 256;
        if ( *((_BYTE *)i + 38) )
        {
          v15 = *(_OWORD *)(i + 5);
          v17 = 1;
          v19 = v15;
        }
        else
        {
          v17 = 0;
          v19 = 0uLL;
          LODWORD(v19) = *((_DWORD *)i + 4);
        }
        IopAddBootDiskInformation(v11, (__int64)&v17);
      }
      if ( !v5 && IopCheckDiskName(&v21, &v22, &v25) )
      {
        v5 = 1;
        v18 = v25;
        v20 = 0x200000;
        if ( *((_BYTE *)i + 38) )
        {
          v16 = *(_OWORD *)(i + 5);
          v17 = 1;
          v19 = v16;
        }
        else
        {
          v17 = 0;
          v19 = 0uLL;
          LODWORD(v19) = *((_DWORD *)i + 4);
        }
        IopAddBootDiskInformation(v11, (__int64)&v17);
      }
      v13 = i[7];
      if ( v13 && (int)VhdiGetDiskParameters(v13, v24, &v26, &v27) >= 0 )
      {
        v17 = v24[0];
        v18 = v24[6];
        v20 = 0x400000;
        if ( v24[0] )
        {
          if ( v24[0] == 1 )
            v19 = *v26;
        }
        else
        {
          v19 = 0uLL;
          LODWORD(v19) = *(_DWORD *)v26;
        }
        IopAddBootDiskInformation(v11, (__int64)&v17);
      }
    }
    *a1 = v11;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}
