/*
 * XREFs of VidSchCheckSurfaceIndependentFlipAssignment @ 0x1C0012C00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VidSchCheckSurfaceIndependentFlipAssignment(
        __int64 a1,
        unsigned int a2,
        struct _LUID *a3,
        __int64 a4,
        _OWORD *a5,
        _DWORD *a6,
        _DWORD *a7,
        struct _LUID DestinationLuid,
        _QWORD *a9,
        _DWORD *a10)
{
  unsigned int v10; // ebx
  unsigned int *v11; // r14
  __int64 v13; // r15
  _QWORD *v15; // rax
  char v16; // si
  unsigned __int8 v17; // di
  _DWORD *v18; // rdx
  __int128 v19; // xmm1
  __int128 v20; // xmm1
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-40h] BYREF
  __int128 v22; // [rsp+38h] [rbp-28h]
  __int128 v23; // [rsp+48h] [rbp-18h]

  v10 = 0;
  v11 = (unsigned int *)DestinationLuid;
  v13 = a2;
  *a6 = 0;
  *a7 = 0;
  v15 = a9;
  *v11 = 0;
  *v15 = 0LL;
  *a10 = 0;
  if ( *(_BYTE *)(a1 + 47) && a2 != -1 )
  {
    RtlCopyLuid(&DestinationLuid, a3);
    v16 = 0;
    v17 = 0;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1824), &LockHandle);
    v18 = (_DWORD *)(*(_QWORD *)(a1 + 8 * v13 + 2592) + 156LL);
    while ( (unsigned int)(*v18 - 1) > 1
         || DestinationLuid.LowPart != *(v18 - 7)
         || DestinationLuid.HighPart != *(v18 - 6) )
    {
      ++v10;
      v18 += 70;
      if ( v10 >= 8 )
        goto LABEL_6;
    }
    if ( a4 == *(_QWORD *)(v18 - 5) || a4 == -1 )
    {
      if ( *((_BYTE *)v18 - 4) )
      {
        v17 = *((_BYTE *)v18 - 1);
        v16 = 1;
        a10 = *(_DWORD **)(v18 - 3);
        if ( v17 )
        {
          v19 = *(_OWORD *)(v18 - 13);
          v22 = *(_OWORD *)(v18 - 17);
          v23 = v19;
        }
      }
      else
      {
        v16 = 0;
      }
    }
    else
    {
      *a10 = 1;
      *v11 = v10;
    }
LABEL_6:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v16 )
    {
      *a6 = 1;
      *v11 = v10;
      *a7 = v17;
      *a9 = a10;
      if ( v17 )
      {
        v20 = v23;
        *a5 = v22;
        a5[1] = v20;
      }
    }
  }
}
