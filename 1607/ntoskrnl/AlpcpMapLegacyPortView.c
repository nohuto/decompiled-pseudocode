/*
 * XREFs of AlpcpMapLegacyPortView @ 0x1404724E8
 * Callers:
 *     AlpcpFormatConnectionRequest @ 0x140409458 (AlpcpFormatConnectionRequest.c)
 *     AlpcpAcceptConnectPort @ 0x1404B4A28 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     AlpcpCreateSectionView @ 0x140409C78 (AlpcpCreateSectionView.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14040B470 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpDeleteBlob @ 0x14040BDA8 (AlpcpDeleteBlob.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 *     MmGetSectionInformation @ 0x140471C08 (MmGetSectionInformation.c)
 *     AlpcpCreateSection @ 0x140472868 (AlpcpCreateSection.c)
 *     AlpcpUnlockBlob @ 0x14050E530 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceView @ 0x140655578 (AlpcpDereferenceView.c)
 */

__int64 __fastcall AlpcpMapLegacyPortView(PVOID Object, __int64 a2, __int64 a3)
{
  void *v3; // rbp
  int SectionInformation; // edi
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // rsi
  char *v12; // rbx
  __int64 v13; // r8
  ULONG_PTR v14; // rsi
  ULONG_PTR v15; // rbx
  __int64 v16; // rax
  ULONG_PTR v17; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18; // [rsp+38h] [rbp-40h] BYREF
  int v19; // [rsp+40h] [rbp-38h]
  PVOID v20; // [rsp+48h] [rbp-30h]
  PVOID v21; // [rsp+88h] [rbp+10h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp+20h] BYREF

  v3 = *(void **)(a2 + 8);
  if ( !v3 )
    return 3221225480LL;
  SectionInformation = ObReferenceObjectByHandle(
                         v3,
                         6u,
                         MmSectionObjectType,
                         KeGetCurrentThread()->PreviousMode,
                         &v21,
                         0LL);
  if ( SectionInformation >= 0 )
  {
    SectionInformation = MmGetSectionInformation((__int64)v21, 0, &v18);
    if ( SectionInformation >= 0 )
    {
      if ( (v19 & 0x800000) != 0 )
      {
        SectionInformation = -1073741637;
      }
      else
      {
        v9 = (unsigned int)(AlpcpViewGranularity - 1);
        v10 = ~((unsigned int)AlpcpViewGranularity - 1LL);
        v11 = v10 & (v9 + *(unsigned int *)(a2 + 16));
        v12 = (char *)(v10 & (v9 + *(_QWORD *)(a2 + 24)));
        if ( (unsigned __int64)&v12[v11] >= v11 )
        {
          if ( &v12[v11] <= v20 )
          {
            if ( !v12 )
              v12 = (char *)v20 - v11;
            SectionInformation = AlpcpCreateSection(Object, v20, (__int64)&BugCheckParameter2);
            if ( SectionInformation >= 0 )
            {
              v13 = v11;
              v14 = BugCheckParameter2;
              SectionInformation = AlpcpCreateSectionView(BugCheckParameter2, Object, v13, (__int64)v12, &v17);
              if ( SectionInformation >= 0 )
              {
                v15 = v17;
                *(_DWORD *)a2 = 48;
                *(_QWORD *)(a2 + 32) = *(_QWORD *)(v15 + 40);
                v16 = *(_QWORD *)(v15 + 48);
                *(_QWORD *)(a2 + 40) = 0LL;
                *(_QWORD *)(a2 + 24) = v16;
                *(_QWORD *)(a3 + 40) = v15;
                AlpcpLockForCachedReferenceBlob(*(_QWORD *)(v15 + 16));
                ++*(_DWORD *)(v15 + 76);
                AlpcpUnlockBlob(*(_QWORD *)(v15 + 16));
              }
              else if ( AlpcpDeleteBlob(v14) )
              {
                AlpcpDereferenceView(v14);
              }
              AlpcpDereferenceView(v14);
            }
          }
          else
          {
            SectionInformation = -1073741670;
          }
        }
        else
        {
          SectionInformation = -1073741811;
        }
      }
    }
    ObfDereferenceObject(v21);
  }
  return (unsigned int)SectionInformation;
}
