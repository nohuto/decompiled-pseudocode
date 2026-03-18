/*
 * XREFs of PpmRegisterProfiles @ 0x1405B9F50
 * Callers:
 *     PdcPoPpmRegisterProfiles @ 0x1405B9F48 (PdcPoPpmRegisterProfiles.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x140008670 (RtlStringCchLengthW.c)
 *     RtlStringCbLengthW @ 0x140025FE8 (RtlStringCbLengthW.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     PpmReleaseLock @ 0x1400E70D0 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1400ED5A0 (PpmAcquireLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     RtlStringCchCopyW @ 0x14011BAF4 (RtlStringCchCopyW.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PpmEventTraceProfiles @ 0x1405BA370 (PpmEventTraceProfiles.c)
 */

__int64 __fastcall PpmRegisterProfiles(unsigned __int8 a1, __int64 a2)
{
  unsigned int v4; // ebp
  SIZE_T v5; // rbx
  unsigned __int8 v6; // di
  SIZE_T v7; // r12
  PVOID PoolWithTag; // rax
  __int64 v9; // r14
  SIZE_T v10; // rax
  unsigned __int8 v11; // r13
  __int64 v12; // r15
  __int64 v13; // r12
  SIZE_T v14; // r14
  size_t v15; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // r9
  signed __int8 v20; // cf
  __int64 v21; // rbx
  __int64 v22; // r9
  _OWORD *v23; // r14
  _OWORD *v24; // rax
  _OWORD *v25; // rcx
  __int64 v26; // rdx
  __int128 v27; // xmm1
  __int64 v28; // rdx
  __int128 v29; // xmm0
  _OWORD *v30; // rcx
  _OWORD *v31; // rax
  __int128 v32; // xmm1
  __int64 v33; // r8
  __int128 v34; // xmm0
  _QWORD *v35; // rcx
  _QWORD *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rdx
  signed __int64 v39; // rcx
  ULONG_PTR v40; // rtt
  struct _KTHREAD *v41; // rdx
  __int16 v42; // ax
  __int64 v44; // [rsp+20h] [rbp-58h]
  __int64 v45; // [rsp+28h] [rbp-50h]
  NTSTATUS v46; // [rsp+80h] [rbp+8h]
  size_t pcbLength; // [rsp+90h] [rbp+18h] BYREF

  if ( a1 > 0x1Fu )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v45 = a1;
    if ( is_mul_ok(a1, 0xB30uLL) )
    {
      v4 = 0;
      v5 = (2864LL * a1 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
      v46 = 0;
      v6 = 0;
      v7 = v5;
      if ( a1 )
      {
        while ( 1 )
        {
          v46 = RtlStringCbLengthW(*(STRSAFE_PCNZWCH *)(32LL * v6 + a2 + 8), 0x7FFFFFFFuLL, &pcbLength);
          v4 = v46;
          if ( v46 < 0 )
            break;
          ++v6;
          v5 += pcbLength + 2;
          if ( v6 >= a1 )
            goto LABEL_6;
        }
      }
      else
      {
LABEL_6:
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x664D5050u);
        v44 = (__int64)PoolWithTag;
        v9 = (__int64)PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, v5);
          v10 = v9 + v7;
          v11 = 0;
          if ( a1 )
          {
            v12 = a2 + 8;
            v13 = v9 + 32;
            v14 = v10;
            do
            {
              ++v11;
              *(_OWORD *)(v13 - 20) = *(_OWORD *)*(_QWORD *)(v12 - 8);
              *(_BYTE *)v13 = *(_BYTE *)(v12 + 8);
              *(_QWORD *)(v13 - 32) = v14;
              *(_QWORD *)(v13 + 2816) = -1LL;
              *(_BYTE *)(v13 - 24) = v11;
              RtlStringCchLengthW(*(STRSAFE_PCNZWCH *)v12, 0x7FFFFFFFuLL, &pcbLength);
              v15 = pcbLength;
              RtlStringCchCopyW(*(NTSTRSAFE_PWSTR *)(v13 - 32), pcbLength + 1, *(NTSTRSAFE_PCWSTR *)v12);
              *(_QWORD *)(v12 + 16) = v13 - 32;
              v14 += 2 * v15 + 2;
              v13 += 2864LL;
              v12 += 32LL;
            }
            while ( v11 < a1 );
            v9 = v44;
            v4 = v46;
          }
          PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          v18 = KeAbPreAcquire((ULONG_PTR)&PpmIdlePolicyLock, 0LL, 0LL, v17);
          v20 = _interlockedbittestandset64((volatile signed __int32 *)&PpmIdlePolicyLock, 0LL);
          v21 = v18;
          if ( v20 )
            ExfAcquirePushLockExclusiveEx(&PpmIdlePolicyLock, v18, (ULONG_PTR)&PpmIdlePolicyLock, v19);
          if ( v21 )
            *(_BYTE *)(v21 + 26) |= 1u;
          qword_14032E288 = (__int64)KeGetCurrentThread();
          PpmProfiles = v9;
          PpmProfileCount = a1;
          if ( a1 )
          {
            v22 = v45;
            v23 = (_OWORD *)(v9 + 40);
            do
            {
              v24 = v23;
              v25 = &unk_14032C768;
              v26 = 10LL;
              do
              {
                *v24 = *v25;
                v24[1] = v25[1];
                v24[2] = v25[2];
                v24[3] = v25[3];
                v24[4] = v25[4];
                v24[5] = v25[5];
                v24[6] = v25[6];
                v24 += 8;
                v27 = v25[7];
                v25 += 8;
                *(v24 - 1) = v27;
                --v26;
              }
              while ( v26 );
              v28 = 10LL;
              *v24 = *v25;
              v24[1] = v25[1];
              v24[2] = v25[2];
              v24[3] = v25[3];
              v24[4] = v25[4];
              v24[5] = v25[5];
              v29 = v25[6];
              v30 = &unk_14032CCD8;
              v24[6] = v29;
              v31 = v23 + 87;
              do
              {
                *v31 = *v30;
                v31[1] = v30[1];
                v31[2] = v30[2];
                v31[3] = v30[3];
                v31[4] = v30[4];
                v31[5] = v30[5];
                v31[6] = v30[6];
                v31 += 8;
                v32 = v30[7];
                v30 += 8;
                *(v31 - 1) = v32;
                --v28;
              }
              while ( v28 );
              v33 = 2LL;
              *v31 = *v30;
              v31[1] = v30[1];
              v31[2] = v30[2];
              v31[3] = v30[3];
              v31[4] = v30[4];
              v31[5] = v30[5];
              v34 = v30[6];
              v35 = v23;
              v31[6] = v34;
              do
              {
                v36 = v35;
                v37 = 2LL;
                do
                {
                  *v36 = 0LL;
                  v36 += 174;
                  --v37;
                }
                while ( v37 );
                ++v35;
                --v33;
              }
              while ( v33 );
              v23 += 179;
              --v22;
            }
            while ( v22 );
          }
          PpmEventTraceProfiles(0LL);
          if ( qword_14032E288 )
            qword_14032E288 = 0LL;
          _m_prefetchw(&PpmIdlePolicyLock);
          v39 = PpmIdlePolicyLock - 16;
          if ( (PpmIdlePolicyLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v39 = 0LL;
          if ( (PpmIdlePolicyLock & 2) != 0
            || (v40 = PpmIdlePolicyLock,
                v40 != _InterlockedCompareExchange64(
                         (volatile signed __int64 *)&PpmIdlePolicyLock,
                         v39,
                         PpmIdlePolicyLock)) )
          {
            ExfReleasePushLock(&PpmIdlePolicyLock, v38);
          }
          KeAbPostRelease((ULONG_PTR)&PpmIdlePolicyLock);
          v41 = KeGetCurrentThread();
          v42 = v41->KernelApcDisable + 1;
          v41->KernelApcDisable = v42;
          if ( !v42
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v41->ApcState.ApcListHead[0].Flink != &v41->152
            && !v41->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          PpmReleaseLock(&PpmPerfPolicyLock);
          PpmProfileStatus |= 1u;
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741675;
    }
  }
  return v4;
}
