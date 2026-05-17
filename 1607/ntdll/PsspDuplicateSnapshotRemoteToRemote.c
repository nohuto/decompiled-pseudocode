/*
 * XREFs of PsspDuplicateSnapshotRemoteToRemote @ 0x180004424
 * Callers:
 *     PssNtDuplicateSnapshot @ 0x180007BC0 (PssNtDuplicateSnapshot.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x1800A6720 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A67E0 (ZwFreeVirtualMemory.c)
 *     NtWriteVirtualMemory @ 0x1800A6B60 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x1800A6BA0 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x1800A6C00 (ZwReadVirtualMemory.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     EvaluateCurrentState @ 0x1800E2A90 (EvaluateCurrentState.c)
 *     PssNtFreeRemoteSnapshot @ 0x1800FED10 (PssNtFreeRemoteSnapshot.c)
 *     PssValidateSnapshotDescriptor @ 0x1800FEF18 (PssValidateSnapshotDescriptor.c)
 */

__int64 __fastcall PsspDuplicateSnapshotRemoteToRemote(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, char a5)
{
  _QWORD *v8; // r15
  unsigned int v9; // r13d
  int v10; // ebx
  unsigned __int64 v11; // r14
  __int64 v12; // rdx
  _OWORD *v13; // rcx
  _OWORD *v14; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int64 v22; // rdx
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int64 v28; // rax
  unsigned __int64 v29; // rsi
  int v30; // eax
  unsigned __int64 v31; // r15
  unsigned __int64 v33; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v38; // [rsp+68h] [rbp-98h]
  __int64 v39; // [rsp+70h] [rbp-90h]
  _QWORD v40[142]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v41[218]; // [rsp+4F0h] [rbp+3F0h] BYREF
  __int64 v42; // [rsp+858h] [rbp+758h]
  unsigned int v43; // [rsp+868h] [rbp+768h]
  __int64 v44; // [rsp+870h] [rbp+770h]
  __int64 v45; // [rsp+878h] [rbp+778h]
  __int64 v46; // [rsp+888h] [rbp+788h]
  __int64 v47; // [rsp+8A0h] [rbp+7A0h]
  __int64 v48; // [rsp+8C0h] [rbp+7C0h]
  __int64 v49; // [rsp+8E0h] [rbp+7E0h]

  v39 = a2;
  v38 = a4;
  v34 = 0LL;
  v35 = 0LL;
  *a4 = 0LL;
  v8 = a4;
  v9 = 0;
  memset(v40, 0, 0x468uLL);
  v10 = ZwReadVirtualMemory(a1, a2, v41, 1128LL, &v36);
  if ( v10 < 0 )
    goto LABEL_47;
  if ( v36 == 1128 )
  {
    if ( v41[0] == 1146311504 )
    {
      v10 = PssValidateSnapshotDescriptor(v41);
      if ( v10 >= 0 )
      {
        v11 = (unsigned __int64)v43 << 6;
        if ( v11 <= 0xFFFFFFFF )
        {
          v9 = v11 + 1128;
          if ( (unsigned int)v11 < 0xFFFFFB98 )
          {
            v12 = 8LL;
            v13 = v40;
            v14 = v41;
            do
            {
              v15 = v14[1];
              *v13 = *v14;
              v16 = v14[2];
              v13[1] = v15;
              v17 = v14[3];
              v13[2] = v16;
              v18 = v14[4];
              v13[3] = v17;
              v19 = v14[5];
              v13[4] = v18;
              v20 = v14[6];
              v13[5] = v19;
              v21 = v14[7];
              v14 += 8;
              v13[6] = v20;
              v13 += 8;
              *(v13 - 1) = v21;
              --v12;
            }
            while ( v12 );
            v22 = v42;
            v23 = v14[1];
            *v13 = *v14;
            v24 = v14[2];
            v13[1] = v23;
            v25 = v14[3];
            v13[2] = v24;
            v26 = v14[4];
            v13[3] = v25;
            v27 = v14[5];
            v28 = *((_QWORD *)v14 + 12);
            v13[4] = v26;
            v13[5] = v27;
            *((_QWORD *)v13 + 12) = v28;
            v40[109] = 0LL;
            v40[112] = 0LL;
            v40[115] = 0LL;
            v40[118] = 0LL;
            v40[122] = 0LL;
            v40[126] = 0LL;
            if ( v22 )
            {
              v10 = ZwDuplicateObject(a1, v22, a3, &v40[109], 0, 0, 2);
              if ( v10 < 0 )
                goto LABEL_47;
            }
            if ( v44 )
            {
              v10 = ZwDuplicateObject(a1, v44, a3, &v40[112], 0, 0, 2);
              if ( v10 < 0 )
                goto LABEL_47;
            }
            if ( v46 )
            {
              v10 = ZwDuplicateObject(a1, v46, a3, &v40[115], 0, 0, 2);
              if ( v10 < 0 )
                goto LABEL_47;
            }
            if ( v47 )
            {
              v10 = ZwDuplicateObject(a1, v47, a3, &v40[118], 0, 0, 2);
              if ( v10 < 0 )
                goto LABEL_47;
            }
            if ( v48 )
            {
              v10 = ZwDuplicateObject(a1, v48, a3, &v40[122], 0, 0, 2);
              if ( v10 < 0 )
                goto LABEL_47;
            }
            if ( v49 )
            {
              v10 = ZwDuplicateObject(a1, v49, a3, &v40[126], 0, 0, 2);
              if ( v10 < 0 )
                goto LABEL_47;
            }
            v34 = 0LL;
            v33 = v9;
            v10 = ZwAllocateVirtualMemory(a3, &v34, 0LL, &v33, 4096, 4);
            if ( v10 < 0 )
              goto LABEL_47;
            HIDWORD(v40[0]) = HIDWORD(v40[0]) & 0xFFFFFFF8 | 1;
            if ( v40[113] )
              v40[113] = v34 + 1128;
            if ( LOWORD(v40[35]) )
              v40[36] = v34 + 296;
            if ( (unsigned int)EvaluateCurrentState(&g_Feature_3414365496_60407404_FeatureDescriptorDetails) )
            {
              v29 = 0LL;
              v30 = NtWriteVirtualMemory(a3, v34, v40, 1128LL, 0LL);
            }
            else
            {
              v30 = NtWriteVirtualMemory(a3, v34, v40, v9, 0LL);
              v29 = 0LL;
            }
            v10 = v30;
            if ( v30 < 0 )
              goto LABEL_47;
            if ( v45 )
            {
              v35 = 0LL;
              v33 = 1LL;
              v10 = ZwAllocateVirtualMemory(-1LL, &v35, 0LL, &v33, 4096, 4);
              if ( v10 < 0 )
                goto LABEL_47;
              if ( (_DWORD)v11 )
              {
                while ( 1 )
                {
                  v31 = v33;
                  if ( v33 > (unsigned int)v11 - v29 )
                    v31 = (unsigned int)v11 - v29;
                  v10 = ZwReadVirtualMemory(a1, v29 + v45, v35, v31, &v36);
                  if ( v10 < 0 )
                    goto LABEL_47;
                  if ( v36 != v31 )
                    goto LABEL_46;
                  v10 = NtWriteVirtualMemory(a3, v29 + v34 + 1128, v35, v36, &v37);
                  if ( v10 < 0 )
                    goto LABEL_47;
                  if ( v37 != v36 )
                  {
LABEL_46:
                    v10 = -2147483635;
                    goto LABEL_47;
                  }
                  v29 += v37;
                  if ( v29 >= (unsigned int)v11 )
                  {
                    v8 = v38;
                    break;
                  }
                }
              }
              ZwFreeVirtualMemory(-1LL, &v35, &v33, 0x8000LL);
              v35 = 0LL;
            }
            v10 = 0;
            *v8 = v34;
            goto LABEL_63;
          }
          v9 = -1;
        }
        v10 = -1073741675;
      }
    }
    else
    {
      v10 = -1073741816;
    }
  }
  else
  {
    v10 = -2147483635;
  }
LABEL_47:
  if ( v35 )
  {
    v33 = 0LL;
    ZwFreeVirtualMemory(-1LL, &v35, &v33, 0x8000LL);
  }
  if ( v34 )
  {
    v33 = v9;
    ZwFreeVirtualMemory(-1LL, &v34, &v33, 0x8000LL);
  }
  if ( v40[126] )
    ZwDuplicateObject(a3, v40[126], 0LL, 0LL, 0, 0, 1);
  if ( v40[122] )
    ZwDuplicateObject(a3, v40[122], 0LL, 0LL, 0, 0, 1);
  if ( v40[115] )
    ZwDuplicateObject(a3, v40[115], 0LL, 0LL, 0, 0, 1);
  if ( v40[118] )
    ZwDuplicateObject(a3, v40[118], 0LL, 0LL, 0, 0, 1);
  if ( v40[112] )
    ZwDuplicateObject(a3, v40[112], 0LL, 0LL, 0, 0, 1);
  if ( v40[109] )
    ZwDuplicateObject(a3, v40[109], 0LL, 0LL, 0, 0, 1);
LABEL_63:
  if ( (a5 & 1) != 0 )
    PssNtFreeRemoteSnapshot(a1, v39);
  return (unsigned int)v10;
}
