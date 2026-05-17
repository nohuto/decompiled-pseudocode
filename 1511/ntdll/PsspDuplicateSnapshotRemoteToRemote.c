/*
 * XREFs of PsspDuplicateSnapshotRemoteToRemote @ 0x1800F67B8
 * Callers:
 *     PssNtDuplicateSnapshot @ 0x18008BD70 (PssNtDuplicateSnapshot.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x1800A53C0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A5480 (ZwFreeVirtualMemory.c)
 *     NtWriteVirtualMemory @ 0x1800A5800 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x1800A5840 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x1800A58A0 (ZwReadVirtualMemory.c)
 *     memset @ 0x1800AB900 (memset.c)
 *     PssNtFreeRemoteSnapshot @ 0x1800F5E80 (PssNtFreeRemoteSnapshot.c)
 */

__int64 __fastcall PsspDuplicateSnapshotRemoteToRemote(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, char a5)
{
  _QWORD *v5; // r15
  int VirtualMemory; // ebx
  unsigned __int64 v7; // r14
  __int64 v8; // rdx
  _OWORD *v9; // rcx
  int *v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int64 v18; // rdx
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int64 v24; // rax
  unsigned __int64 v25; // rsi
  __int64 v26; // r15
  __int64 v28; // [rsp+58h] [rbp-A8h]
  __int64 v29; // [rsp+60h] [rbp-A0h]
  _QWORD v31[142]; // [rsp+80h] [rbp-80h] BYREF
  int v32; // [rsp+4F0h] [rbp+3F0h] BYREF
  __int64 v33; // [rsp+858h] [rbp+758h]
  unsigned int v34; // [rsp+868h] [rbp+768h]
  __int64 v35; // [rsp+870h] [rbp+770h]
  __int64 v36; // [rsp+878h] [rbp+778h]
  __int64 v37; // [rsp+888h] [rbp+788h]
  __int64 v38; // [rsp+8A0h] [rbp+7A0h]
  __int64 v39; // [rsp+8C0h] [rbp+7C0h]
  __int64 v40; // [rsp+8E0h] [rbp+7E0h]

  *a4 = 0LL;
  v5 = a4;
  memset(v31, 0, 0x468uLL);
  VirtualMemory = ZwReadVirtualMemory();
  if ( VirtualMemory < 0 )
    goto LABEL_43;
  if ( v28 == 1128 )
  {
    if ( v32 == 1146311504 )
    {
      v7 = (unsigned __int64)v34 << 6;
      if ( v7 <= 0xFFFFFFFF && (unsigned int)v7 < 0xFFFFFB98 )
      {
        v8 = 8LL;
        v9 = v31;
        v10 = &v32;
        do
        {
          v11 = *((_OWORD *)v10 + 1);
          *v9 = *(_OWORD *)v10;
          v12 = *((_OWORD *)v10 + 2);
          v9[1] = v11;
          v13 = *((_OWORD *)v10 + 3);
          v9[2] = v12;
          v14 = *((_OWORD *)v10 + 4);
          v9[3] = v13;
          v15 = *((_OWORD *)v10 + 5);
          v9[4] = v14;
          v16 = *((_OWORD *)v10 + 6);
          v9[5] = v15;
          v17 = *((_OWORD *)v10 + 7);
          v10 += 32;
          v9[6] = v16;
          v9 += 8;
          *(v9 - 1) = v17;
          --v8;
        }
        while ( v8 );
        v18 = v33;
        v19 = *((_OWORD *)v10 + 1);
        *v9 = *(_OWORD *)v10;
        v20 = *((_OWORD *)v10 + 2);
        v9[1] = v19;
        v21 = *((_OWORD *)v10 + 3);
        v9[2] = v20;
        v22 = *((_OWORD *)v10 + 4);
        v9[3] = v21;
        v23 = *((_OWORD *)v10 + 5);
        v24 = *((_QWORD *)v10 + 12);
        v9[4] = v22;
        v9[5] = v23;
        *((_QWORD *)v9 + 12) = v24;
        v31[109] = 0LL;
        v31[112] = 0LL;
        v31[115] = 0LL;
        v31[118] = 0LL;
        v31[122] = 0LL;
        v31[126] = 0LL;
        if ( v18 )
        {
          VirtualMemory = ZwDuplicateObject();
          if ( VirtualMemory < 0 )
            goto LABEL_43;
        }
        if ( v35 )
        {
          VirtualMemory = ZwDuplicateObject();
          if ( VirtualMemory < 0 )
            goto LABEL_43;
        }
        if ( v37 )
        {
          VirtualMemory = ZwDuplicateObject();
          if ( VirtualMemory < 0 )
            goto LABEL_43;
        }
        if ( v38 )
        {
          VirtualMemory = ZwDuplicateObject();
          if ( VirtualMemory < 0 )
            goto LABEL_43;
        }
        if ( v39 )
        {
          VirtualMemory = ZwDuplicateObject();
          if ( VirtualMemory < 0 )
            goto LABEL_43;
        }
        if ( v40 )
        {
          VirtualMemory = ZwDuplicateObject();
          if ( VirtualMemory < 0 )
            goto LABEL_43;
        }
        VirtualMemory = ZwAllocateVirtualMemory();
        if ( VirtualMemory < 0 )
          goto LABEL_43;
        HIDWORD(v31[0]) = HIDWORD(v31[0]) & 0xFFFFFFF8 | 1;
        if ( v31[113] )
          v31[113] = 1128LL;
        if ( LOWORD(v31[35]) )
          v31[36] = 296LL;
        v25 = 0LL;
        VirtualMemory = NtWriteVirtualMemory();
        if ( VirtualMemory < 0 )
          goto LABEL_43;
        if ( v36 )
        {
          VirtualMemory = ZwAllocateVirtualMemory();
          if ( VirtualMemory < 0 )
            goto LABEL_43;
          if ( (_DWORD)v7 )
          {
            while ( 1 )
            {
              v26 = 1LL;
              if ( (unsigned int)v7 == v25 )
                v26 = (unsigned int)v7 - v25;
              VirtualMemory = ZwReadVirtualMemory();
              if ( VirtualMemory < 0 )
                goto LABEL_43;
              if ( v28 != v26 )
                goto LABEL_42;
              VirtualMemory = NtWriteVirtualMemory();
              if ( VirtualMemory < 0 )
                goto LABEL_43;
              if ( v29 != v28 )
              {
LABEL_42:
                VirtualMemory = -2147483635;
                goto LABEL_43;
              }
              v25 += v29;
              if ( v25 >= (unsigned int)v7 )
              {
                v5 = a4;
                break;
              }
            }
          }
          ZwFreeVirtualMemory();
        }
        VirtualMemory = 0;
        *v5 = 0LL;
        goto LABEL_55;
      }
      VirtualMemory = -1073741675;
    }
    else
    {
      VirtualMemory = -1073741816;
    }
  }
  else
  {
    VirtualMemory = -2147483635;
  }
LABEL_43:
  if ( v31[126] )
    ZwDuplicateObject();
  if ( v31[122] )
    ZwDuplicateObject();
  if ( v31[115] )
    ZwDuplicateObject();
  if ( v31[118] )
    ZwDuplicateObject();
  if ( v31[112] )
    ZwDuplicateObject();
  if ( v31[109] )
    ZwDuplicateObject();
LABEL_55:
  if ( (a5 & 1) != 0 )
    PssNtFreeRemoteSnapshot();
  return (unsigned int)VirtualMemory;
}
