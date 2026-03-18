/*
 * XREFs of PiDmObjectGetCachedObjectProperty @ 0x14043D254
 * Callers:
 *     PiDmObjectGetCachedCmProperty @ 0x14043C4E0 (PiDmObjectGetCachedCmProperty.c)
 *     PiPnpRtlObjectActionCallback @ 0x14043CD30 (PiPnpRtlObjectActionCallback.c)
 * Callees:
 *     PiDmObjectRelease @ 0x14043D3D0 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x14043D410 (PiDmGetObject.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x14043D764 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectGetCachedObjectReference @ 0x14045CD10 (PiDmObjectGetCachedObjectReference.c)
 */

__int64 __fastcall PiDmObjectGetCachedObjectProperty(
        int a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9)
{
  int v9; // r12d
  __int64 v10; // rbp
  int Object; // edi
  int v13; // r14d
  int v14; // ebx
  __int64 v16; // rax
  int v17; // r9d
  PVOID v18; // rbx
  PVOID P[2]; // [rsp+40h] [rbp-28h] BYREF
  PVOID v20; // [rsp+80h] [rbp+18h] BYREF

  v20 = a3;
  P[0] = 0LL;
  v9 = a2;
  v10 = a7;
  Object = -1073741802;
  if ( a7 )
  {
    v13 = a8;
    v10 = -(__int64)(a8 != 0) & a7;
  }
  else
  {
    v13 = 0;
  }
  if ( a1 < 6 && !a4 )
  {
    Object = PiDmGetObject((unsigned int)a1, a2, P);
    if ( Object >= 0 )
    {
      v14 = a5;
      if ( a1 != 3 || *(_DWORD *)(a5 + 16) != 2 )
        goto LABEL_7;
      v16 = *(_QWORD *)a5 - *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1;
      if ( *(_QWORD *)a5 == *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1 )
        v16 = *(_QWORD *)(a5 + 8) - *(_QWORD *)DEVPKEY_Device_ContainerId.fmtid.Data4;
      if ( !v16
        && (int)PiDmObjectGetCachedObjectReference(3, v9, P[0], (unsigned int)&DEVPKEY_Device_InstanceId, (__int64)&v20) >= 0 )
      {
        v17 = v14;
        v18 = v20;
        Object = PiDmObjectGetCachedObjectPropertyData(
                   *((_DWORD *)v20 + 7),
                   *((_QWORD *)v20 + 2),
                   (_DWORD)v20,
                   v17,
                   a6,
                   v10,
                   v13,
                   a9);
        PiDmObjectRelease(v18);
      }
      else
      {
LABEL_7:
        Object = PiDmObjectGetCachedObjectPropertyData(a1, v9, P[0], v14, a6, v10, v13, a9);
      }
      PiDmObjectRelease(P[0]);
    }
  }
  return (unsigned int)Object;
}
