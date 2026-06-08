/*
 * XREFs of PepNotifyQueryCoordinatedStates @ 0x1C00192FC
 * Callers:
 *     RegisterKernelCoordinatedStates @ 0x1C001657C (RegisterKernelCoordinatedStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0005940 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0005DE0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0005E00 (memmove.c)
 *     memset @ 0x1C0006140 (memset.c)
 *     PepQueryName @ 0x1C001982C (PepQueryName.c)
 *     ValidateCoordinatedDependencyOptions @ 0x1C001D064 (ValidateCoordinatedDependencyOptions.c)
 */

__int64 __fastcall PepNotifyQueryCoordinatedStates(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbp
  SIZE_T v4; // rbx
  char *v5; // rsi
  _DWORD *v6; // r14
  unsigned int *PoolWithTag; // rax
  int v8; // ebx
  int v9; // ebx
  int v10; // r8d
  unsigned int v11; // r15d
  __int64 v12; // r9
  unsigned int *v13; // rdx
  unsigned int v14; // ecx
  int v15; // eax
  int v16; // edi
  int v17; // ebx
  SIZE_T v18; // r12
  char *v19; // rax
  unsigned int v20; // r12d
  char *v21; // r13
  char *v22; // r14
  char *v23; // rbx
  unsigned int *v24; // rdi
  unsigned int v25; // edx
  __int64 v26; // rcx
  SIZE_T v27; // r13
  unsigned int v28; // r12d
  unsigned int *v29; // rdi
  unsigned int v30; // r15d
  int v31; // r8d
  __int64 v32; // rax
  __int64 v33; // rcx
  unsigned int v34; // eax
  char v35; // dl
  __int64 v36; // r10
  _QWORD *v37; // rax
  unsigned int v38; // r8d
  __int64 v39; // r9
  _BYTE *v40; // rcx
  bool v41; // zf
  PVOID *v42; // rdi
  unsigned int *P; // [rsp+30h] [rbp-118h]
  char *v46; // [rsp+40h] [rbp-108h]
  char v48[176]; // [rsp+50h] [rbp-F8h] BYREF

  v2 = (unsigned int)dword_1C0009878;
  v4 = (unsigned int)(16 * dword_1C0009878 + 4);
  v5 = 0LL;
  v6 = 0LL;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x72637250u);
  P = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v4);
    *P = v2;
    v8 = PoFxProcessorNotification(*(_QWORD *)(a1 + 1048), 29LL, P);
    if ( v8 >= 0 )
    {
      v9 = 0;
      v10 = 0;
      v11 = 0;
      if ( (_DWORD)v2 )
      {
        v12 = v2;
        v13 = P + 4;
        do
        {
          v14 = *v13;
          v15 = *(v13 - 1);
          v13 += 4;
          v9 += v15;
          v10 += v14 * v15;
          if ( v11 < v14 )
            v11 = v14;
          --v12;
        }
        while ( v12 );
      }
      v16 = (216 * v2 + 55) & 0xFFFFFFF8;
      v17 = v16 + 16 * v9;
      v18 = (unsigned int)(v17 + 4 * v10);
      v19 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v18, 0x72637250u);
      v46 = v19;
      v5 = v19;
      if ( !v19 )
        goto LABEL_10;
      memset(v19, 0, v18);
      v20 = 0;
      v21 = &v5[v16];
      v22 = &v5[v17];
      if ( (_DWORD)v2 )
      {
        v23 = v5 + 232;
        v24 = P + 3;
        do
        {
          KeInitializeAffinityEx(v23 - 184);
          v25 = 0;
          *(_DWORD *)v23 = *(v24 - 2);
          *((_DWORD *)v23 + 1) = *(v24 - 1);
          *((_DWORD *)v23 + 3) = *v24;
          *((_DWORD *)v23 + 2) = v24[1];
          *((_QWORD *)v23 + 3) = v21;
          v21 += 16 * *v24;
          if ( *v24 )
          {
            do
            {
              v26 = v25++;
              *(_QWORD *)(*((_QWORD *)v23 + 3) + 16 * v26 + 8) = v22;
              v22 += 4 * v24[1];
            }
            while ( v25 < *v24 );
          }
          PepQueryName(a1, v20++, 27LL, v23 - 16);
          v23 += 216;
          v24 += 4;
        }
        while ( v20 < (unsigned int)v2 );
        v5 = v46;
      }
      v27 = 4 * v11 + 24;
      v6 = ExAllocatePoolWithTag(NonPagedPoolNx, v27, 0x72637250u);
      if ( v6 )
      {
        v28 = 0;
        if ( (_DWORD)v2 )
        {
          v29 = (unsigned int *)(v5 + 244);
          while ( 1 )
          {
            v30 = 0;
            if ( *v29 )
              break;
LABEL_27:
            KeCopyAffinityEx(v48, &unk_1C0009638);
            v35 = 0;
            if ( !*v29 )
              goto LABEL_50;
            v36 = *v29;
            v37 = (_QWORD *)(*(_QWORD *)(v29 + 3) + 8LL);
            do
            {
              v38 = *((_DWORD *)v37 - 1);
              if ( v38 )
              {
                v39 = v38;
                v40 = (_BYTE *)(*v37 + 2LL);
                do
                {
                  v41 = *v40 == 0;
                  v40 += 4;
                  if ( !v41 )
                    v35 = 1;
                  --v39;
                }
                while ( v39 );
              }
              v37 += 2;
              --v36;
            }
            while ( v36 );
            if ( !v35 )
            {
LABEL_50:
              v8 = -1073741811;
              goto LABEL_40;
            }
            if ( (unsigned int)KeIsEqualAffinityEx(v29 - 49, &unk_1C0009638) )
              *((_BYTE *)v29 + 4) = 1;
            ++v28;
            v29 += 54;
            if ( v28 >= (unsigned int)v2 )
              goto LABEL_39;
          }
          while ( 1 )
          {
            memset(v6, 0, v27);
            *v6 = v28;
            v6[1] = v30;
            v6[2] = *(v29 - 1);
            v8 = ((__int64 (__fastcall *)(_QWORD, _DWORD *))qword_1C0009628)(*(_QWORD *)(a1 + 1048), v6);
            if ( v8 < 0 )
              break;
            v8 = ValidateCoordinatedDependencyOptions((_DWORD)v5, v28, v31, *(v29 - 1), (__int64)v6);
            if ( v8 < 0 )
              break;
            v32 = *((_QWORD *)v6 + 2);
            v33 = *(_QWORD *)(v29 + 3) + 16LL * v30;
            if ( v32 )
              *(_DWORD *)v33 = *(_DWORD *)(v32 + 56);
            else
              *(_DWORD *)v33 = -1;
            v34 = v6[3];
            *(_DWORD *)(v33 + 4) = v34;
            memmove(*(void **)(v33 + 8), v6 + 6, 4LL * v34);
            if ( ++v30 >= *v29 )
              goto LABEL_27;
          }
        }
        else
        {
LABEL_39:
          v8 = 0;
          *a2 = v5;
          v5 = 0LL;
        }
      }
      else
      {
LABEL_10:
        v8 = -1073741670;
      }
    }
LABEL_40:
    ExFreePoolWithTag(P, 0x72637250u);
    if ( v6 )
      ExFreePoolWithTag(v6, 0x72637250u);
    if ( v5 )
    {
      if ( (_DWORD)v2 )
      {
        v42 = (PVOID *)(v5 + 224);
        do
        {
          if ( *v42 )
            ExFreePoolWithTag(*v42, 0x72637250u);
          v42 += 27;
          --v2;
        }
        while ( v2 );
      }
      ExFreePoolWithTag(v5, 0x72637250u);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v8;
}
