/*
 * XREFs of AlpcpMapLegacyPortView @ 0x14052ABD8
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x140471474 (AlpcpAcceptConnectPort.c)
 *     AlpcpFormatConnectionRequest @ 0x14052A7D4 (AlpcpFormatConnectionRequest.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     AlpcpCreateSectionView @ 0x140474264 (AlpcpCreateSectionView.c)
 *     AlpcpDeleteBlob @ 0x140475E64 (AlpcpDeleteBlob.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     MmGetSectionInformation @ 0x140510EFC (MmGetSectionInformation.c)
 *     AlpcpCreateSection @ 0x14052B184 (AlpcpCreateSection.c)
 */

__int64 __fastcall AlpcpMapLegacyPortView(PVOID Object, __int64 a2, __int64 a3)
{
  void *v3; // r15
  int SectionInformation; // esi
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // rdi
  char *v12; // rbx
  __int64 v13; // r8
  ULONG_PTR v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  signed __int64 v18; // rax
  bool v19; // cc
  ULONG_PTR v20; // rax
  signed __int64 v21; // rbx
  ULONG_PTR v22; // rbx
  _QWORD *v23; // r15
  ULONG_PTR v24; // rdi
  __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // rbx
  signed __int64 v28; // rax
  int v29; // r14d
  ULONG_PTR v30; // rdi
  char v31; // cl
  signed __int64 v32; // rcx
  signed __int64 v33; // rbx
  ULONG_PTR v34; // rbx
  PVOID v35; // [rsp+30h] [rbp-20h] BYREF
  int v36; // [rsp+40h] [rbp-10h]
  PVOID v37; // [rsp+48h] [rbp-8h]
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp+48h] BYREF
  ULONG_PTR v39; // [rsp+A8h] [rbp+58h] BYREF

  v3 = *(void **)(a2 + 8);
  if ( !v3 )
    return 3221225480LL;
  SectionInformation = ObReferenceObjectByHandle(
                         v3,
                         6u,
                         MmSectionObjectType,
                         KeGetCurrentThread()->PreviousMode,
                         &v35,
                         0LL);
  if ( SectionInformation >= 0 )
  {
    SectionInformation = MmGetSectionInformation((__int64)v35, 0);
    if ( SectionInformation >= 0 )
    {
      if ( (v36 & 0x800000) != 0 )
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
          if ( &v12[v11] <= v37 )
          {
            if ( !v12 )
              v12 = (char *)v37 - v11;
            SectionInformation = AlpcpCreateSection(Object, v37, (__int64)&BugCheckParameter2);
            if ( SectionInformation < 0 )
              goto LABEL_7;
            v13 = v11;
            v14 = BugCheckParameter2;
            SectionInformation = AlpcpCreateSectionView(
                                   BugCheckParameter2,
                                   Object,
                                   v13,
                                   (__int64)v12,
                                   (volatile signed __int32 *)&v39);
            if ( SectionInformation >= 0 )
            {
              v23 = (_QWORD *)v39;
              *(_DWORD *)a2 = 48;
              *(_QWORD *)(a2 + 32) = v23[5];
              *(_QWORD *)(a2 + 24) = v23[6];
              *(_QWORD *)(a2 + 40) = 0LL;
              *(_QWORD *)(a3 + 40) = v23;
              v24 = v23[2];
              v25 = KeAbPreAcquire(v24 - 16, 0LL, 0LL, v17);
              v27 = v25;
              if ( _interlockedbittestandset64((volatile signed __int32 *)(v24 - 16), 0LL) )
                ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v24 - 16), v25, v24 - 16, v26);
              if ( v27 )
                *(_BYTE *)(v27 + 26) |= 1u;
              *(_BYTE *)(v24 - 32) |= 1u;
              v28 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 - 24), 0x10000uLL) + 0x10000;
              if ( v28 <= 0 )
                KeBugCheckEx(0x18u, 0LL, v24, 0x26uLL, v28);
              v29 = 0;
              ++*(_DWORD *)(v39 + 76);
              v30 = v23[2];
              v31 = *(_BYTE *)(v30 - 32);
              if ( (v31 & 1) != 0 )
              {
                v29 = 0x10000 - *(__int16 *)(v30 - 30);
                *(_WORD *)(v30 - 30) = 0;
                *(_BYTE *)(v30 - 32) = v31 & 0xFE;
              }
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v30 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(v30 - 16));
              KeAbPostRelease(v30 - 16);
              if ( v29 > 0 )
              {
                v32 = -v29 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v30 - 24), -v29);
                if ( v32 <= 0 )
                {
                  if ( v32 )
                    KeBugCheckEx(0x18u, 0LL, v30, 0x28uLL, v32);
                  AlpcpDestroyBlob(v30);
                }
              }
              v33 = _InterlockedExchangeAdd64(
                      (volatile signed __int64 *)(BugCheckParameter2 - 24),
                      0xFFFFFFFFFFFFFFFFuLL);
              v19 = v33 <= 1;
              v34 = v33 - 1;
              if ( !v19 )
                goto LABEL_7;
              if ( v34 )
                KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x21uLL, v34);
            }
            else
            {
              if ( AlpcpDeleteBlob(v14, v15, v16, v17) )
              {
                v18 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 - 24), 0xFFFFFFFFFFFFFFFFuLL);
                v19 = v18 <= 1;
                v20 = v18 - 1;
                if ( v19 )
                {
                  if ( v20 )
                    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x21uLL, v20);
                  v14 = BugCheckParameter2;
                  AlpcpDestroyBlob(BugCheckParameter2);
                }
                else
                {
                  v14 = BugCheckParameter2;
                }
              }
              v21 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 - 24), 0xFFFFFFFFFFFFFFFFuLL);
              v19 = v21 <= 1;
              v22 = v21 - 1;
              if ( !v19 )
                goto LABEL_7;
              if ( v22 )
                KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x21uLL, v22);
            }
            AlpcpDestroyBlob(BugCheckParameter2);
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
LABEL_7:
    ObfDereferenceObject(v35);
  }
  return (unsigned int)SectionInformation;
}
