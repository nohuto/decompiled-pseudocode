/*
 * XREFs of CmQueryMultipleValueKey @ 0x1404A8708
 * Callers:
 *     NtQueryMultipleValueKey @ 0x1404A8360 (NtQueryMultipleValueKey.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpSearchAddTrans @ 0x1403D6DD0 (CmpSearchAddTrans.c)
 *     CmpFindNameInList @ 0x1403F40B0 (CmpFindNameInList.c)
 *     CmpLockTwoKcbsShared @ 0x1403FD8E0 (CmpLockTwoKcbsShared.c)
 *     CmpUnlockTwoKcbs @ 0x1403FDDA0 (CmpUnlockTwoKcbs.c)
 *     CmRmIsKCBDeleted @ 0x1403FE220 (CmRmIsKCBDeleted.c)
 *     CmpGetValueData @ 0x140422DD0 (CmpGetValueData.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140423B38 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 *     CmpFindValueByName @ 0x1404A8CEC (CmpFindValueByName.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall CmQueryMultipleValueKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int *a6,
        unsigned int *a7)
{
  __int64 v9; // r12
  unsigned __int64 v10; // r15
  char *v11; // rsi
  char *v12; // rsi
  ULONG_PTR v13; // r13
  __int64 v14; // rax
  int v15; // edi
  __int64 i; // rax
  _OWORD *v17; // rcx
  int v18; // edi
  const void *v19; // rsi
  ULONG64 v20; // rcx
  PVOID PoolWithTag; // rax
  unsigned int v22; // ecx
  unsigned int v23; // edx
  unsigned int ValueByName; // edi
  __int64 v25; // rax
  __int64 v26; // r8
  unsigned int v27; // esi
  unsigned int v28; // edx
  unsigned int v29; // r9d
  __int64 v30; // rcx
  int v32; // ebx
  int v33; // esi
  int v34; // eax
  int v35; // eax
  char v36; // [rsp+40h] [rbp-118h]
  unsigned int v37; // [rsp+44h] [rbp-114h]
  char PreviousMode; // [rsp+48h] [rbp-110h]
  unsigned int v39; // [rsp+4Ch] [rbp-10Ch]
  unsigned int v40; // [rsp+4Ch] [rbp-10Ch]
  int v41; // [rsp+54h] [rbp-104h]
  size_t Size; // [rsp+5Ch] [rbp-FCh] BYREF
  int v43; // [rsp+64h] [rbp-F4h]
  char *v44; // [rsp+68h] [rbp-F0h]
  int v45; // [rsp+70h] [rbp-E8h] BYREF
  int v46; // [rsp+74h] [rbp-E4h] BYREF
  void *v47[2]; // [rsp+78h] [rbp-E0h] BYREF
  __int64 v48; // [rsp+88h] [rbp-D0h]
  int v49; // [rsp+90h] [rbp-C8h] BYREF
  void *Src; // [rsp+98h] [rbp-C0h] BYREF
  int v51; // [rsp+A0h] [rbp-B8h]
  int v52; // [rsp+A4h] [rbp-B4h] BYREF
  __int64 v53; // [rsp+A8h] [rbp-B0h]
  PVOID P; // [rsp+B0h] [rbp-A8h]
  __int64 v55; // [rsp+B8h] [rbp-A0h]
  unsigned __int64 v56; // [rsp+C0h] [rbp-98h]
  unsigned int v57; // [rsp+C8h] [rbp-90h]
  __int64 v58; // [rsp+D0h] [rbp-88h]
  char *v59; // [rsp+D8h] [rbp-80h]
  ULONG_PTR v60; // [rsp+E0h] [rbp-78h]
  __int64 v61; // [rsp+E8h] [rbp-70h]
  char *v62; // [rsp+F0h] [rbp-68h] BYREF
  __int64 v63; // [rsp+F8h] [rbp-60h]
  __int128 v64; // [rsp+100h] [rbp-58h]
  __int128 v65; // [rsp+110h] [rbp-48h]
  char v66; // [rsp+160h] [rbp+8h] BYREF
  __int64 v67; // [rsp+170h] [rbp+18h]
  unsigned int v68; // [rsp+178h] [rbp+20h]

  v68 = a4;
  v67 = a3;
  v55 = 0LL;
  v9 = 0LL;
  v53 = 0LL;
  LOWORD(v47[0]) = 0;
  *(void **)((char *)v47 + 2) = 0LL;
  *(_DWORD *)((char *)&v47[1] + 2) = 0;
  HIWORD(v47[1]) = 0;
  v48 = 0LL;
  v45 = -1;
  v39 = 0;
  v37 = 0;
  Size = 0LL;
  v36 = 0;
  v46 = -1;
  v58 = 0LL;
  v49 = -1;
  v10 = 0LL;
  v56 = 0LL;
  v62 = 0LL;
  v43 = 0;
  Src = 0LL;
  v66 = 0;
  v52 = -1;
  P = 0LL;
  v57 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v11 = *(char **)(a1 + 8);
  v44 = v11;
  v59 = v11;
  CmpLockRegistry();
  if ( !*(_QWORD *)(a1 + 56) && !*(_QWORD *)(a1 + 64) )
    goto LABEL_3;
  if ( CmRmIsKCBDeleted((__int64)v11, 0LL) )
  {
    v32 = (*(_BYTE *)(a1 + 48) & 1) != 0 ? 0x2A9 : 0;
LABEL_66:
    CmpUnlockRegistry();
    return (unsigned int)(v32 - 1073741444);
  }
  v33 = CmpSearchAddTrans(a1, 0LL, 0LL, *(_QWORD *)(a1 + 56), *(__int128 **)(a1 + 64), 0, &v62);
  if ( v33 >= 0 )
  {
    v11 = v44;
LABEL_3:
    if ( a2 )
    {
      v10 = *(_QWORD *)(a2 + 8);
      v56 = v10;
    }
    CmpLockTwoKcbsShared(v10, (unsigned __int64)v11);
    v12 = v62;
    if ( !CmRmIsKCBDeleted((__int64)v44, (__int64)v62) )
    {
      if ( v10 && CmRmIsKCBDeleted(v10, (__int64)v12) )
      {
        v15 = (*(_BYTE *)(a2 + 48) & 1) != 0 ? -1073740763 : -1073741444;
LABEL_79:
        CmpUnlockTwoKcbs((char *)v10, v44);
        CmpUnlockRegistry();
        return (unsigned int)v15;
      }
      v13 = *((_QWORD *)v44 + 4);
      v60 = v13;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v13 + 2848), 1u);
      v14 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v13 + 8))(v13, *((unsigned int *)v44 + 10), &v46);
      v63 = v14;
      if ( v14 )
      {
        CmpUpdateKeyNodeAccessBits(v13, v14, *((_DWORD *)v44 + 10));
        ExReleaseResourceLite(*(PERESOURCE *)(v13 + 2848));
        if ( v12 )
        {
          v34 = BYTE4(Size);
          if ( *((char **)v44 + 35) == v12 )
            v34 = 1;
          HIDWORD(Size) = v34;
        }
        if ( !v10 )
        {
LABEL_10:
          v15 = 0;
          for ( i = 0LL; ; i = (unsigned int)(v51 + 1) )
          {
            v51 = i;
            if ( (unsigned int)i >= v68 )
              goto LABEL_49;
            if ( PreviousMode == 1 )
            {
              v61 = v67 + 24 * i;
              v17 = *(_OWORD **)v61;
              if ( *(_QWORD *)v61 >= MmUserProbeAddress )
                v17 = (_OWORD *)MmUserProbeAddress;
              v18 = *(_DWORD *)v17;
              LODWORD(v64) = v18;
              v19 = (const void *)*((_QWORD *)v17 + 1);
              *((_QWORD *)&v64 + 1) = v19;
              v65 = v64;
              if ( (_WORD)v18 )
              {
                if ( ((unsigned __int8)v19 & 1) != 0 )
                  ExRaiseDatatypeMisalignment();
                v20 = (ULONG64)v19 + (unsigned __int16)v18;
                if ( v20 > MmUserProbeAddress || v20 < (unsigned __int64)v19 )
                  *(_BYTE *)MmUserProbeAddress = 0;
              }
              if ( (v18 & 1) != 0 )
              {
                v15 = -1073741811;
                v22 = v37;
                v23 = v39;
                goto LABEL_50;
              }
              if ( (_WORD)v18 && (unsigned __int16)v18 > v57 )
              {
                if ( P )
                  ExFreePoolWithTag(P, 0);
                PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)v18, 0x20204D43u);
                P = PoolWithTag;
                if ( !PoolWithTag )
                {
                  v15 = -1073741670;
                  v22 = v37;
                  v23 = v39;
                  goto LABEL_50;
                }
                v47[1] = PoolWithTag;
              }
              memmove(v47[1], v19, (unsigned __int16)v18);
              LOWORD(v47[0]) = v18;
              WORD1(v47[0]) = v18;
            }
            else
            {
              v61 = v67 + 24 * i;
              *(_OWORD *)v47 = *(_OWORD *)*(_QWORD *)v61;
              LOWORD(v18) = v47[0];
            }
            while ( (_WORD)v18 && !*((_WORD *)v47[1] + ((unsigned __int64)(unsigned __int16)v18 >> 1) - 1) )
            {
              LOWORD(v18) = v18 - 2;
              LOWORD(v47[0]) = v18;
            }
            ValueByName = -1;
            v41 = -1;
            if ( v10 )
            {
              v9 = v55;
              v53 = v55;
              if ( (_BYTE)v43 )
              {
                CmpFindNameInList(v55, v10 + 272);
                ValueByName = -1;
              }
              else
              {
                ValueByName = CmpFindValueByName(v55, v58, v47);
                v41 = ValueByName;
              }
            }
            if ( ValueByName == -1 )
            {
              v9 = v13;
              v53 = v13;
              if ( BYTE4(Size) )
              {
                CmpFindNameInList(v13, (__int64)(v44 + 272));
                ValueByName = v41;
              }
              else
              {
                ValueByName = CmpFindValueByName(v13, v63, v47);
              }
              if ( ValueByName == -1 )
              {
                v15 = -1073741772;
LABEL_49:
                v22 = v37;
                v23 = v39;
LABEL_50:
                if ( v15 >= 0 )
                {
                  if ( v36 )
                    v15 = -2147483643;
                  *a6 = v22;
                  if ( a7 )
                    *a7 = v23;
                }
LABEL_55:
                v26 = v48;
                goto LABEL_56;
              }
            }
            v25 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v9 + 8))(v9, ValueByName, &v45);
            v26 = v25;
            v48 = v25;
            if ( !v25 )
              break;
            v27 = *(_DWORD *)(v25 + 4);
            if ( v27 >= 0x80000000 )
              v27 += 0x80000000;
            LODWORD(Size) = v27;
            v28 = (v37 + 3) & 0xFFFFFFFC;
            v37 = v28;
            v29 = (v39 + 3) & 0xFFFFFFFC;
            v40 = v29;
            if ( v27 + v28 > *a6 || v27 + v28 < v28 || v36 )
            {
              v36 = 1;
              v15 = 0;
            }
            else
            {
              if ( !CmpGetValueData(v9, ValueByName, v25, (unsigned int *)&Size, (__int64 *)&Src, &v66, (__int64)&v52) )
              {
                v15 = -1073741670;
                goto LABEL_55;
              }
              v27 = Size;
              memmove((void *)(a5 + v37), Src, (unsigned int)Size);
              v30 = v61;
              *(_DWORD *)(v61 + 16) = *(_DWORD *)(v48 + 12);
              *(_DWORD *)(v30 + 8) = v27;
              *(_DWORD *)(v30 + 12) = v37;
              v15 = 0;
              if ( v66 )
              {
                ExFreePoolWithTag(Src, 0);
                v66 = 0;
              }
              else
              {
                (*(void (__fastcall **)(__int64, int *))(v9 + 16))(v9, &v52);
              }
              Src = 0LL;
              v37 += v27;
              v29 = v40;
            }
            v39 = v27 + v29;
            (*(void (__fastcall **)(__int64, int *))(v9 + 16))(v9, &v45);
            v48 = 0LL;
          }
          v15 = -1073741670;
LABEL_56:
          if ( v26 )
            (*(void (__fastcall **)(__int64, int *))(v9 + 16))(v9, &v45);
          if ( v58 )
            (*(void (__fastcall **)(__int64, int *))(v55 + 16))(v55, &v49);
          (*(void (__fastcall **)(ULONG_PTR, int *))(v13 + 16))(v13, &v46);
          CmpUnlockTwoKcbs((char *)v10, v44);
          CmpUnlockRegistry();
          if ( P )
            ExFreePoolWithTag(P, 0);
          return (unsigned int)v15;
        }
        v55 = *(_QWORD *)(v10 + 32);
        v58 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v55 + 8))(v55, *(unsigned int *)(v10 + 40), &v49);
        if ( v58 )
        {
          if ( v12 )
          {
            v35 = (unsigned __int8)v43;
            if ( *(char **)(v10 + 280) == v12 )
              v35 = 1;
            v43 = v35;
          }
          goto LABEL_10;
        }
        (*(void (__fastcall **)(ULONG_PTR, int *))(v13 + 16))(v13, &v46);
      }
      else
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v13 + 2848));
      }
      v15 = -1073741670;
      goto LABEL_79;
    }
    v32 = (*(_BYTE *)(a1 + 48) & 1) != 0 ? 0x2A9 : 0;
    CmpUnlockTwoKcbs((char *)v10, v44);
    goto LABEL_66;
  }
  CmpUnlockRegistry();
  return (unsigned int)v33;
}
