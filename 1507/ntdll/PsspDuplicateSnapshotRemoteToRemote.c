/*
 * XREFs of PsspDuplicateSnapshotRemoteToRemote @ 0x1800F68A4
 * Callers:
 *     PssNtDuplicateSnapshot @ 0x180083960 (PssNtDuplicateSnapshot.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x180093A80 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x180093AE0 (ZwFreeVirtualMemory.c)
 *     NtWriteVirtualMemory @ 0x180093CA0 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x180093CC0 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x180093CF0 (ZwReadVirtualMemory.c)
 *     memset @ 0x180098540 (memset.c)
 *     PssNtFreeRemoteSnapshot @ 0x1800F65A0 (PssNtFreeRemoteSnapshot.c)
 *     EvaluateCurrentState @ 0x1800F67A8 (EvaluateCurrentState.c)
 *     PssValidateSnapshotDescriptor @ 0x1800F6860 (PssValidateSnapshotDescriptor.c)
 */

__int64 __fastcall PsspDuplicateSnapshotRemoteToRemote(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, char a5)
{
  _QWORD *v5; // r15
  int VirtualMemory; // ebx
  int v7; // eax
  unsigned __int64 v8; // r14
  __int64 v9; // rdx
  _OWORD *v10; // rax
  __int64 *v11; // rcx
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v19; // rdx
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  unsigned __int64 v22; // rsi
  __int64 v23; // r15
  __int64 v25; // [rsp+58h] [rbp-A8h]
  __int64 v26; // [rsp+60h] [rbp-A0h]
  _QWORD v28[134]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v29[104]; // [rsp+4B0h] [rbp+3B0h] BYREF
  unsigned int v30; // [rsp+7F0h] [rbp+6F0h]
  __int64 v31; // [rsp+7F8h] [rbp+6F8h]
  __int64 v32; // [rsp+800h] [rbp+700h]
  __int64 v33; // [rsp+810h] [rbp+710h]
  __int64 v34; // [rsp+828h] [rbp+728h]
  __int64 v35; // [rsp+848h] [rbp+748h]
  __int64 v36; // [rsp+868h] [rbp+768h]

  *a4 = 0LL;
  v5 = a4;
  memset(v28, 0, sizeof(v28));
  VirtualMemory = ZwReadVirtualMemory();
  if ( VirtualMemory < 0 )
    goto LABEL_46;
  if ( v25 == 1072 )
  {
    if ( LODWORD(v29[0]) != 1146311504 )
      goto LABEL_5;
    LOBYTE(v7) = EvaluateCurrentState();
    if ( v7 )
    {
      VirtualMemory = PssValidateSnapshotDescriptor(v29);
      if ( VirtualMemory < 0 )
        goto LABEL_46;
    }
    if ( LODWORD(v29[0]) == 1146311504 )
    {
      v8 = (unsigned __int64)v30 << 6;
      if ( v8 <= 0xFFFFFFFF && (unsigned int)v8 < 0xFFFFFBD0 )
      {
        v9 = 8LL;
        v10 = v28;
        v11 = v29;
        do
        {
          v12 = *((_OWORD *)v11 + 1);
          *v10 = *(_OWORD *)v11;
          v13 = *((_OWORD *)v11 + 2);
          v10[1] = v12;
          v14 = *((_OWORD *)v11 + 3);
          v10[2] = v13;
          v15 = *((_OWORD *)v11 + 4);
          v10[3] = v14;
          v16 = *((_OWORD *)v11 + 5);
          v10[4] = v15;
          v17 = *((_OWORD *)v11 + 6);
          v10[5] = v16;
          v18 = *((_OWORD *)v11 + 7);
          v11 += 16;
          v10[6] = v17;
          v10 += 8;
          *(v10 - 1) = v18;
          --v9;
        }
        while ( v9 );
        v19 = v29[102];
        v20 = *((_OWORD *)v11 + 1);
        *v10 = *(_OWORD *)v11;
        v21 = *((_OWORD *)v11 + 2);
        v10[1] = v20;
        v10[2] = v21;
        v28[102] = 0LL;
        v28[105] = 0LL;
        v28[108] = 0LL;
        v28[111] = 0LL;
        v28[115] = 0LL;
        v28[119] = 0LL;
        if ( v19 )
        {
          VirtualMemory = ZwDuplicateObject();
          if ( VirtualMemory < 0 )
            goto LABEL_46;
        }
        if ( v31 )
        {
          VirtualMemory = ZwDuplicateObject();
          if ( VirtualMemory < 0 )
            goto LABEL_46;
        }
        if ( v33 )
        {
          VirtualMemory = ZwDuplicateObject();
          if ( VirtualMemory < 0 )
            goto LABEL_46;
        }
        if ( v34 )
        {
          VirtualMemory = ZwDuplicateObject();
          if ( VirtualMemory < 0 )
            goto LABEL_46;
        }
        if ( v35 )
        {
          VirtualMemory = ZwDuplicateObject();
          if ( VirtualMemory < 0 )
            goto LABEL_46;
        }
        if ( v36 )
        {
          VirtualMemory = ZwDuplicateObject();
          if ( VirtualMemory < 0 )
            goto LABEL_46;
        }
        VirtualMemory = ZwAllocateVirtualMemory();
        if ( VirtualMemory < 0 )
          goto LABEL_46;
        HIDWORD(v28[0]) = HIDWORD(v28[0]) & 0xFFFFFFF8 | 1;
        if ( v28[106] )
          v28[106] = 1072LL;
        if ( LOWORD(v28[28]) )
          v28[29] = 240LL;
        v22 = 0LL;
        VirtualMemory = NtWriteVirtualMemory();
        if ( VirtualMemory < 0 )
          goto LABEL_46;
        if ( v32 )
        {
          VirtualMemory = ZwAllocateVirtualMemory();
          if ( VirtualMemory < 0 )
            goto LABEL_46;
          if ( (_DWORD)v8 )
          {
            while ( 1 )
            {
              v23 = 1LL;
              if ( (unsigned int)v8 == v22 )
                v23 = (unsigned int)v8 - v22;
              VirtualMemory = ZwReadVirtualMemory();
              if ( VirtualMemory < 0 )
                goto LABEL_46;
              if ( v25 != v23 )
                goto LABEL_45;
              VirtualMemory = NtWriteVirtualMemory();
              if ( VirtualMemory < 0 )
                goto LABEL_46;
              if ( v26 != v25 )
              {
LABEL_45:
                VirtualMemory = -2147483635;
                goto LABEL_46;
              }
              v22 += v26;
              if ( v22 >= (unsigned int)v8 )
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
        goto LABEL_58;
      }
      VirtualMemory = -1073741675;
    }
    else
    {
LABEL_5:
      VirtualMemory = -1073741816;
    }
  }
  else
  {
    VirtualMemory = -2147483635;
  }
LABEL_46:
  if ( v28[119] )
    ZwDuplicateObject();
  if ( v28[115] )
    ZwDuplicateObject();
  if ( v28[108] )
    ZwDuplicateObject();
  if ( v28[111] )
    ZwDuplicateObject();
  if ( v28[105] )
    ZwDuplicateObject();
  if ( v28[102] )
    ZwDuplicateObject();
LABEL_58:
  if ( (a5 & 1) != 0 )
    PssNtFreeRemoteSnapshot();
  return (unsigned int)VirtualMemory;
}
