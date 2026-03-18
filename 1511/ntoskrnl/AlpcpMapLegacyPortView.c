/*
 * XREFs of AlpcpMapLegacyPortView @ 0x14044FC24
 * Callers:
 *     AlpcpFormatConnectionRequest @ 0x14047D7C8 (AlpcpFormatConnectionRequest.c)
 *     AlpcpAcceptConnectPort @ 0x14047D9CC (AlpcpAcceptConnectPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     AlpcpUnlockBlob @ 0x140424050 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x1404243CC (AlpcpDereferenceBlobEx.c)
 *     AlpcpCreateSection @ 0x14044E0D4 (AlpcpCreateSection.c)
 *     MmGetSectionInformation @ 0x14044F1E4 (MmGetSectionInformation.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14047CFD8 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpCreateSectionView @ 0x14047D390 (AlpcpCreateSectionView.c)
 */

__int64 __fastcall AlpcpMapLegacyPortView(char *Object, __int64 a2, __int64 a3)
{
  void *v3; // r14
  int SectionInformation; // edi
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // rbp
  __int64 v11; // rbx
  ULONG_PTR v12; // rbx
  __int64 v13; // rax
  ULONG_PTR v15; // [rsp+30h] [rbp-48h] BYREF
  int v16; // [rsp+40h] [rbp-38h]
  __int64 v17; // [rsp+48h] [rbp-30h]
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp+10h] BYREF
  PVOID Objecta; // [rsp+98h] [rbp+20h] BYREF

  v3 = *(void **)(a2 + 8);
  if ( !v3 )
    return 3221225480LL;
  SectionInformation = ObReferenceObjectByHandle(
                         v3,
                         6u,
                         MmSectionObjectType,
                         KeGetCurrentThread()->PreviousMode,
                         &Objecta,
                         0LL);
  if ( SectionInformation >= 0 )
  {
    SectionInformation = MmGetSectionInformation((__int64)Objecta, 0);
    if ( SectionInformation >= 0 )
    {
      if ( (v16 & 0x800000) != 0 )
      {
        SectionInformation = -1073741637;
      }
      else
      {
        v8 = (unsigned int)(AlpcpViewGranularity - 1);
        v9 = ~((unsigned int)AlpcpViewGranularity - 1LL);
        v10 = v9 & (v8 + *(unsigned int *)(a2 + 16));
        v11 = v9 & (v8 + *(_QWORD *)(a2 + 24));
        if ( v11 + v10 < v10 )
        {
          SectionInformation = -1073741811;
        }
        else if ( v11 + v10 > v17 )
        {
          SectionInformation = -1073741670;
        }
        else
        {
          SectionInformation = AlpcpCreateSection(Object, 0, 0, v3, v17, &BugCheckParameter2);
          if ( SectionInformation >= 0 )
          {
            SectionInformation = AlpcpCreateSectionView(BugCheckParameter2, Object, (ULONG_PTR)&v15);
            if ( SectionInformation < 0 )
            {
              AlpcpDereferenceBlobEx(BugCheckParameter2, 1);
            }
            else
            {
              v12 = v15;
              *(_DWORD *)a2 = 48;
              *(_QWORD *)(a2 + 32) = *(_QWORD *)(v12 + 40);
              v13 = *(_QWORD *)(v12 + 48);
              *(_QWORD *)(a2 + 40) = 0LL;
              *(_QWORD *)(a2 + 24) = v13;
              *(_QWORD *)(a3 + 40) = v12;
              AlpcpLockForCachedReferenceBlob(*(_QWORD *)(v12 + 16));
              ++*(_DWORD *)(v12 + 76);
              AlpcpUnlockBlob(*(_QWORD *)(v12 + 16));
            }
          }
        }
      }
    }
    ObfDereferenceObject(Objecta);
  }
  return (unsigned int)SectionInformation;
}
