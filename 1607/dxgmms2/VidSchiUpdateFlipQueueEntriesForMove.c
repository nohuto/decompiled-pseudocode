/*
 * XREFs of VidSchiUpdateFlipQueueEntriesForMove @ 0x1C00259A4
 * Callers:
 *     ?ResumeDevicesOnAllocationCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C009A210 (-ResumeDevicesOnAllocationCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 * Callees:
 *     memset @ 0x1C0014E40 (memset.c)
 */

void __fastcall VidSchiUpdateFlipQueueEntriesForMove(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // r13d
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r13
  __int64 v7; // rdi
  int v8; // r12d
  unsigned int v9; // r14d
  __int64 v10; // rcx
  unsigned int v11; // r15d
  bool v12; // zf
  int v13; // eax
  __int64 v14; // rsi
  _QWORD *v15; // rax
  __int64 *v16; // rax
  unsigned int v17; // edx
  __int64 v18; // r11
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 *v21; // rax
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // r10
  unsigned int v25; // r9d
  __int64 v26; // r14
  unsigned int v27; // eax
  int v28; // ecx
  char v29; // r15
  char v30; // r13
  int v31; // ecx
  unsigned int v32; // r11d
  int v33; // eax
  unsigned int v34; // edx
  int v35; // ecx
  __int64 v36; // rsi
  int v37; // eax
  unsigned int v38; // r8d
  int v39; // eax
  __int64 v40; // [rsp+30h] [rbp-D0h]
  __int64 v41; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v42; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v43; // [rsp+48h] [rbp-B8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v45[276]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v47; // [rsp+928h] [rbp+828h] BYREF
  int v48; // [rsp+930h] [rbp+830h]
  int v49; // [rsp+938h] [rbp+838h]

  v3 = *(_DWORD *)(a2[5] + 4LL);
  v40 = a2[63];
  v4 = a2[18];
  v5 = a2[17];
  v6 = (v3 >> 6) & 0xF;
  v42 = v4;
  v49 = v6;
  v41 = v4 + *(_QWORD *)(v5 + 24);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1856), &LockHandle);
  v7 = *(_QWORD *)(a1 + 8 * v6 + 2968);
  LOWORD(v8) = *(_WORD *)(v7 + 18736);
  while ( (_WORD)v8 )
  {
    v9 = *(unsigned __int16 *)(v7 + 18738);
    LOBYTE(v10) = -1;
    v11 = 0;
    v12 = !_BitScanForward((unsigned int *)&v13, (unsigned __int16)v8);
    if ( !v12 )
      LOBYTE(v10) = v13;
    v10 = (char)v10;
    v48 = (char)v10;
    if ( v9 )
    {
      v47 = v10;
      v14 = v10 << 11;
      v15 = (_QWORD *)((v10 << 11) + v7 + 2360);
      while ( *v15 != v40 )
      {
        ++v11;
        v15 += 4;
        if ( v11 >= v9 )
          goto LABEL_21;
      }
      memset(&v45[1], 0, 0x850uLL);
      HIDWORD(v45[1]) = *(unsigned __int16 *)(v14 + v7 + 2376);
      v45[3] = *(_QWORD *)(v14 + v7 + 2352);
      v45[0] = a1;
      LODWORD(v45[1]) = v6;
      if ( v11 )
        v16 = (__int64 *)(v14 + v7 + 2368);
      else
        v16 = &v41;
      v45[2] = *v16;
      v17 = 0;
      LODWORD(v45[4]) = v9;
      v18 = v47;
      do
      {
        if ( v17 )
        {
          v19 = 3LL * (v17 - 1);
          v20 = 32 * (v17 + (v18 << 6));
          v45[v19 + 71] = *(_QWORD *)(v20 + v7 + 2352);
          LOWORD(v45[v19 + 72]) = *(_WORD *)(v20 + v7 + 2376);
          if ( v11 == v17 )
            v21 = &v42;
          else
            v21 = (__int64 *)(v7 + 32 * (v17 + (v18 << 6) + 74));
          v45[3 * v17 + 70] = *v21;
          v9 = v45[4];
        }
        ++v17;
      }
      while ( v17 < v9 );
      LODWORD(v45[70]) |= 0x102u;
      v22 = *(unsigned int *)(a1 + 32);
      v23 = *(_QWORD *)(a1 + 24);
      LODWORD(v45[265]) = -1073741823;
      LOBYTE(v47) = 0;
      DpSynchronizeExecution(v23, VidSchiExecuteMmIoFlipAtISR, v45, v22, &v47);
      LODWORD(v10) = v48;
    }
LABEL_21:
    v24 = *(_QWORD *)(v7 + 8LL * (int)v10 + 24);
    if ( v24 )
    {
      v25 = *(_DWORD *)(v24 + 52);
      if ( v25 != *(_DWORD *)(v24 + 32) )
      {
        do
        {
          v26 = 1224LL * v25;
          v27 = *(_DWORD *)(v26 + v24 + 1100);
          if ( v27 > 0xC || (v28 = 4673, !_bittest(&v28, v27)) )
          {
            v29 = -1;
            v30 = 0;
            v31 = **(_DWORD **)(v26 + v24 + 1208);
            v32 = (unsigned __int8)v31;
            v12 = !_BitScanForward((unsigned int *)&v33, (unsigned __int8)v31);
            if ( !v12 )
              v29 = v33;
            if ( (_BYTE)v31 )
            {
              do
              {
                v34 = *(unsigned __int16 *)(v7 + 18738);
                v35 = 0;
                if ( *(_WORD *)(v7 + 18738) )
                {
                  v36 = *(_QWORD *)(v26 + v24 + 1208);
                  v37 = *(_DWORD *)(v36 + 8);
                  LODWORD(v47) = *(_DWORD *)(v36 + 4);
                  v38 = v30;
                  v43 = (unsigned int)v47 * ((8 * v37 + 167) & 0xFFFFFFF8);
                  while ( v40 != *(_QWORD *)(*(_QWORD *)(v43 + 48 * (v38 + 1LL) + v36) + 96LL) )
                  {
                    v38 += v47;
                    if ( ++v35 >= v34 )
                      goto LABEL_34;
                  }
                  *(_QWORD *)(v36
                            + *(_DWORD *)(v36 + 4) * ((8 * *(_DWORD *)(v36 + 8) + 167) & 0xFFFFFFF8)
                            + 48LL * (unsigned int)(v30 + v35 * *(_DWORD *)(v36 + 4))
                            + 40) = v41;
                }
LABEL_34:
                v39 = 1 << v29;
                v29 = -1;
                v32 &= ~v39;
                v12 = !_BitScanForward((unsigned int *)&v39, v32);
                if ( !v12 )
                  v29 = v39;
                ++v30;
              }
              while ( v32 );
            }
          }
          v25 = ((_BYTE)v25 + 1) & 0x3F;
        }
        while ( v25 != *(_DWORD *)(v24 + 32) );
        LODWORD(v6) = v49;
        LOBYTE(v10) = v48;
      }
    }
    v8 = (unsigned __int16)v8 & ~(1 << v10);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
