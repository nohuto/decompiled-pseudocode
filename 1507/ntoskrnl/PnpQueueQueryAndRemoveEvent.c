/*
 * XREFs of PnpQueueQueryAndRemoveEvent @ 0x14058AA90
 * Callers:
 *     PiCMQueryRemove @ 0x14058A87C (PiCMQueryRemove.c)
 *     PnpRequestDeviceEjectExWorker @ 0x14067B3F0 (PnpRequestDeviceEjectExWorker.c)
 *     PiControlQueryAndRemoveDevice @ 0x140694958 (PiControlQueryAndRemoveDevice.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x1404E1F9C (PnpDeviceObjectFromDeviceInstance.c)
 *     PnpSetTargetDeviceRemove @ 0x1405353A4 (PnpSetTargetDeviceRemove.c)
 *     PnpRemoveEventFromQueue @ 0x14068E4C4 (PnpRemoveEventFromQueue.c)
 */

__int64 __fastcall PnpQueueQueryAndRemoveEvent(unsigned __int16 *a1, _DWORD *a2, void *a3, __int64 a4, char a5, int a6)
{
  _WORD *v6; // r13
  int v7; // r14d
  volatile __int32 *v8; // rsi
  int *v9; // r12
  unsigned __int16 *v10; // rdi
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  char *PoolWithTag; // rax
  int v15; // ebx
  int v16; // esi
  int v17; // r15d
  int v18; // r9d
  PVOID v19; // r15
  int v20; // ebx
  int v21; // eax
  _DWORD *v22; // r12
  REGHANDLE v24; // rbx
  BOOLEAN v25; // al
  unsigned __int16 v26; // ax
  _WORD *v27; // rsi
  __int16 v28; // dx
  int v29; // ecx
  _WORD *v30; // rax
  unsigned int v31; // eax
  int v32; // ecx
  unsigned __int16 v33; // ax
  __int64 v34; // rcx
  REGHANDLE v35; // rdi
  char v36; // [rsp+70h] [rbp-90h]
  unsigned __int16 v37; // [rsp+78h] [rbp-88h] BYREF
  __int16 v38; // [rsp+7Ch] [rbp-84h] BYREF
  PVOID P; // [rsp+80h] [rbp-80h] BYREF
  int v40; // [rsp+88h] [rbp-78h] BYREF
  PVOID Object; // [rsp+90h] [rbp-70h] BYREF
  PVOID v42; // [rsp+98h] [rbp-68h]
  unsigned __int16 *v43; // [rsp+A0h] [rbp-60h]
  _DWORD *v44; // [rsp+A8h] [rbp-58h]
  int v45; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v46; // [rsp+B8h] [rbp-48h] BYREF
  void *v47; // [rsp+C0h] [rbp-40h]
  struct _KEVENT Event; // [rsp+C8h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v50; // [rsp+F0h] [rbp-10h]
  int v51; // [rsp+F8h] [rbp-8h]
  int v52; // [rsp+FCh] [rbp-4h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+100h] [rbp+0h] BYREF
  __int64 v54; // [rsp+110h] [rbp+10h]
  int v55; // [rsp+118h] [rbp+18h]
  int v56; // [rsp+11Ch] [rbp+1Ch]
  int *v57; // [rsp+120h] [rbp+20h]
  __int64 v58; // [rsp+128h] [rbp+28h]
  __int16 *v59; // [rsp+130h] [rbp+30h]
  __int64 v60; // [rsp+138h] [rbp+38h]
  __int64 v61; // [rsp+140h] [rbp+40h]
  int v62; // [rsp+148h] [rbp+48h]
  int v63; // [rsp+14Ch] [rbp+4Ch]
  PVOID *p_Object; // [rsp+150h] [rbp+50h]
  __int64 v65; // [rsp+158h] [rbp+58h]

  v6 = (_WORD *)a4;
  v43 = a1;
  v47 = a3;
  v7 = a5 & 8;
  v44 = a2;
  v8 = 0LL;
  P = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v36 = 0;
  *a2 = 0;
  if ( (a5 & 8) != 0 )
  {
    v24 = PnpEtwHandle;
    if ( PnpEtwHandle )
    {
      v25 = EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_DeviceEject_Start);
      a4 = 0LL;
      if ( v25 )
      {
        v52 = 0;
        *(_QWORD *)&UserData.Size = 2LL;
        v26 = *v43;
        v51 = *v43;
        v38 = v26 >> 1;
        UserData.Ptr = (ULONGLONG)&v38;
        v50 = *((_QWORD *)v43 + 1);
        EtwWrite(v24, &KMPnPEvt_DeviceEject_Start, 0LL, 2u, &UserData);
      }
    }
  }
  v11 = PnpDeviceObjectFromDeviceInstance((__int64)v43, (__int64)a2, (__int64)a3, a4);
  Object = v11;
  if ( !v11 )
  {
    v20 = -1073741810;
    goto LABEL_29;
  }
  v12 = *(_QWORD *)(v11[39] + 40LL);
  if ( !v12 )
  {
    v20 = -1073741810;
LABEL_39:
    v19 = Object;
    goto LABEL_26;
  }
  if ( v12 == IopRootDeviceNode )
  {
    v20 = -1073741790;
    goto LABEL_39;
  }
  v13 = *(unsigned int *)v6;
  if ( (_DWORD)v13 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v13 + 20, 0x20207050u);
    v42 = PoolWithTag;
    v9 = (int *)PoolWithTag;
    if ( !PoolWithTag )
    {
      v19 = Object;
      v20 = -1073741670;
      goto LABEL_25;
    }
    v10 = (unsigned __int16 *)(PoolWithTag + 4);
    v36 = 1;
    v15 = 0;
    *(_QWORD *)(PoolWithTag + 12) = PoolWithTag + 20;
    *((_WORD *)PoolWithTag + 3) = *v6;
    *((_WORD *)PoolWithTag + 2) = 0;
  }
  else
  {
    v42 = 0LL;
    v15 = 1;
  }
  if ( (a5 & 8) != 0 && a6 )
    v15 = 1;
  v40 = (a5 & 0xB) != 0;
  if ( (a5 & 2) != 0 )
  {
    v16 = 22;
    goto LABEL_12;
  }
  if ( (a5 & 8) == 0 )
  {
    v16 = 21;
LABEL_12:
    v17 = 0;
    goto LABEL_13;
  }
  v16 = 47;
  v17 = 1;
LABEL_13:
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v18 = v17;
  v19 = Object;
  v20 = PnpSetTargetDeviceRemove(
          Object,
          0,
          v40,
          v18,
          v15,
          v16,
          (__int64)&Event,
          0LL,
          0LL,
          &v46,
          (__int64)v9,
          (__int64)v10,
          (__int64 *)&P);
  if ( v20 >= 0 )
  {
    v20 = KeWaitForSingleObject(&Event, Executive, 0, 1u, 0LL);
    if ( v20 != 257 )
      goto LABEL_15;
    v8 = (volatile __int32 *)P;
    if ( (unsigned int)PnpRemoveEventFromQueue(P) )
    {
      v20 = -1073741536;
      goto LABEL_24;
    }
    if ( _InterlockedExchange(v8 + 17, 1) )
    {
      v20 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
LABEL_15:
      if ( v20 >= 0 )
        v20 = v46;
      if ( v9 )
      {
        v21 = *v9;
        v22 = v44;
        *v44 = v21;
      }
      else
      {
        v22 = v44;
      }
      if ( v10 )
      {
        if ( *v10 )
        {
          if ( (unsigned int)*v10 >= *(_DWORD *)v6 )
            *v10 = *v6 - 2;
          v27 = v47;
          memmove(v47, *((const void **)v10 + 1), *v10);
          v27[(unsigned __int64)*v10 >> 1] = 0;
        }
        *(_DWORD *)v6 = *v10;
      }
      if ( *v22 == 6 )
      {
        v28 = (__int16)v47;
        if ( v47 )
        {
          v29 = 0;
          v30 = v47;
          if ( *(_WORD *)v47 )
          {
            while ( *v30 != 92 || ++v29 != 3 )
            {
              if ( !*++v30 )
                goto LABEL_62;
            }
            *v30 = 0;
LABEL_62:
            if ( v29 == 3 )
              *(_DWORD *)v6 = (unsigned __int16)((_WORD)v30 - v28);
          }
        }
      }
      goto LABEL_23;
    }
    v20 = -1073741536;
    v36 = 0;
    *((_BYTE *)P + 72) = 1;
    _InterlockedExchange(v8 + 17, 0);
  }
LABEL_23:
  v8 = (volatile __int32 *)P;
LABEL_24:
  v9 = (int *)v42;
LABEL_25:
  v7 = a5 & 8;
LABEL_26:
  ObfDereferenceObject(v19);
  if ( v8 && _InterlockedExchangeAdd(v8 + 16, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag(P, 0x4B706E50u);
LABEL_29:
  if ( v7 )
  {
    v45 = v20;
    *(_QWORD *)&v53.Size = 2LL;
    v31 = (a6 != 0 ? 0x80000000 : 0) | *v44;
    v56 = 0;
    v32 = *v43;
    LODWORD(Object) = v31;
    LOWORD(v40) = (unsigned __int16)v32 >> 1;
    v53.Ptr = (ULONGLONG)&v40;
    v54 = *((_QWORD *)v43 + 1);
    v57 = &v45;
    v55 = v32;
    v58 = 4LL;
    v33 = v10 ? *v10 >> 1 : 0;
    v37 = v33;
    v59 = (__int16 *)&v37;
    v60 = 2LL;
    v34 = v10 ? *((_QWORD *)v10 + 1) : 0LL;
    v35 = PnpEtwHandle;
    v61 = v34;
    v62 = 2 * v33;
    p_Object = &Object;
    v63 = 0;
    v65 = 4LL;
    if ( PnpEtwHandle )
    {
      if ( EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_DeviceEject_Stop) )
        EtwWrite(v35, &KMPnPEvt_DeviceEject_Stop, 0LL, 6u, &v53);
    }
  }
  if ( v36 )
    ExFreePoolWithTag(v9, 0);
  return (unsigned int)v20;
}
