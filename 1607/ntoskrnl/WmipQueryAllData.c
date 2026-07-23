/*
 * XREFs of WmipQueryAllData @ 0x1404E7C28
 * Callers:
 *     WmipIoControl @ 0x140473894 (WmipIoControl.c)
 *     IoWMIQueryAllData @ 0x14057D484 (IoWMIQueryAllData.c)
 *     WmipQueryAllDataMultiple @ 0x14069E570 (WmipQueryAllDataMultiple.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObReferenceObjectByPointer @ 0x14007F7E0 (ObReferenceObjectByPointer.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     WmipPrepareForWnodeAD @ 0x140473680 (WmipPrepareForWnodeAD.c)
 *     WmipInsertStaticNames @ 0x1404E79C4 (WmipInsertStaticNames.c)
 *     WmipStaticInstanceNameSize @ 0x1404E7BA8 (WmipStaticInstanceNameSize.c)
 *     WmipUnreferenceEntry @ 0x1404E8014 (WmipUnreferenceEntry.c)
 *     WmipForwardWmiIrp @ 0x1404E80DC (WmipForwardWmiIrp.c)
 *     WmipSendWmiIrp @ 0x140549C18 (WmipSendWmiIrp.c)
 */

__int64 __fastcall WmipQueryAllData(
        void *a1,
        IRP *a2,
        KPROCESSOR_MODE a3,
        unsigned int *a4,
        unsigned int a5,
        unsigned int *a6)
{
  PVOID v7; // r13
  NTSTATUS v8; // eax
  int v9; // r14d
  unsigned int v10; // ebx
  char v11; // dl
  unsigned int v12; // r9d
  char v13; // r15
  unsigned int *v14; // rdi
  char *v15; // rcx
  __int128 v16; // xmm6
  unsigned int v17; // esi
  unsigned int *v18; // r13
  __int64 v19; // r12
  int v20; // eax
  int v21; // r12d
  unsigned int v22; // ecx
  IRP *v23; // rax
  int v24; // eax
  bool v25; // zf
  __int64 v26; // r12
  __int64 v27; // rax
  _DWORD *v28; // rsi
  unsigned int v30; // eax
  unsigned int *v31; // rax
  __int64 v32; // [rsp+38h] [rbp-D0h] BYREF
  int v33[2]; // [rsp+40h] [rbp-C8h]
  unsigned int *v34; // [rsp+48h] [rbp-C0h]
  PVOID v35; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+58h] [rbp-B0h]
  PVOID Object; // [rsp+60h] [rbp-A8h] BYREF
  PVOID P; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v39; // [rsp+70h] [rbp-98h]
  unsigned int *v40; // [rsp+78h] [rbp-90h]
  unsigned int *v41; // [rsp+80h] [rbp-88h]
  PIRP Irp; // [rsp+88h] [rbp-80h]
  _DWORD *v43; // [rsp+90h] [rbp-78h]
  __int128 v44; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v45[80]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v46[128]; // [rsp+F8h] [rbp-10h] BYREF

  v43 = a4;
  v7 = a1;
  Irp = a2;
  v40 = a6;
  Object = a1;
  if ( a1 )
  {
    v8 = ObReferenceObjectByPointer(a1, 1u, WmipGuidObjectType, a3);
  }
  else
  {
    v8 = ObReferenceObjectByHandle(*((HANDLE *)a4 + 2), 1u, WmipGuidObjectType, a3, &Object, 0LL);
    v7 = Object;
  }
  v9 = v8;
  if ( v8 < 0 )
    return (unsigned int)v9;
  LODWORD(v35) = 16;
  P = v46;
  v9 = WmipPrepareForWnodeAD((__int64)v7, &v44, (int *)&v35, (__int64 *)&P, &v32);
  if ( v9 < 0 )
    goto LABEL_40;
  if ( (_BYTE)v32 )
  {
    a4[11] |= 0x100u;
    a4[3] = 0;
    v9 = 0;
    *(_OWORD *)(a4 + 6) = v44;
    *a6 = 48;
    goto LABEL_40;
  }
  v10 = 0;
  v41 = 0LL;
  v11 = 0;
  v12 = a4[11];
  v13 = 0;
  v33[0] = a5;
  v14 = a4;
  v9 = -1073741163;
  LODWORD(v36) = v12;
  v34 = a4;
  LOBYTE(v32) = 0;
  if ( !(_DWORD)v35 )
    goto LABEL_37;
  v15 = (char *)P;
  v16 = v44;
  v17 = v33[0];
  v18 = v41;
  v39 = (unsigned int)v35;
  v35 = P;
  do
  {
    v19 = *(_QWORD *)v15;
    *(_QWORD *)v33 = *(_QWORD *)v15;
    if ( v13 || v11 || v17 < 0x48 )
    {
      v14 = (unsigned int *)v45;
      memset(v45, 0, 0x48uLL);
      v15 = (char *)v35;
      v17 = 72;
      v12 = v36;
      LOBYTE(v32) = 1;
    }
    *v14 = 48;
    if ( (*(_DWORD *)(v19 + 16) & 3) != 0 )
    {
      v20 = 128;
      v21 = 1;
    }
    else
    {
      v21 = 0;
      v20 = 0;
    }
    v14[11] = v12 | v20;
    *(_OWORD *)(v14 + 6) = v16;
    v22 = *(_DWORD *)(*(_QWORD *)v15 + 80LL);
    v14[3] = 0;
    v23 = Irp;
    v14[1] = v22;
    if ( v23 )
      v24 = WmipForwardWmiIrp(v23, v17, (__int64)v14);
    else
      v24 = WmipSendWmiIrp(0LL, v22, v14 + 6, v17, v14, &v44);
    v14[1] = 0;
    if ( v24 < 0 )
      goto LABEL_66;
    if ( (v14[11] & 0x20) != 0 )
    {
      if ( v14[12] <= v17 )
        v24 = -1073741823;
    }
    else if ( !v14[13] )
    {
      v24 = -1073741163;
    }
    if ( v24 < 0 )
    {
LABEL_66:
      v26 = *(_QWORD *)v33;
      goto LABEL_54;
    }
    if ( (v14[11] & 0x20) != 0 )
    {
      v30 = v14[12];
    }
    else
    {
      if ( !(_BYTE)v32 )
      {
        if ( v18 )
          v18[3] = (_DWORD)v14 - (_DWORD)v18;
        v25 = v21 == 0;
        v18 = v14;
        v26 = *(_QWORD *)v33;
        if ( !v25 && (WmipInsertStaticNames(v14, v17, *(__int64 *)v33), (v14[11] & 0x20) != 0) )
        {
          v27 = v14[12];
          v13 = 1;
        }
        else
        {
          v27 = *v14;
        }
        if ( (int)v27 + 7 >= (unsigned int)v27 )
          v27 = ((_DWORD)v27 + 7) & 0xFFFFFFF8;
        v10 += v27;
        if ( !v13 && v17 >= (unsigned int)v27 )
        {
          v17 -= v27;
          v14 = (unsigned int *)((char *)v34 + v27);
          v34 = (unsigned int *)((char *)v34 + v27);
          goto LABEL_32;
        }
        goto LABEL_53;
      }
      v30 = *v14;
    }
    if ( v30 < 0x48 )
      v30 = 72;
    v10 += v30;
    if ( v21 )
    {
      if ( v10 + 3 >= v10 )
        v10 = (v10 + 3) & 0xFFFFFFFC;
      v26 = *(_QWORD *)v33;
      v10 += WmipStaticInstanceNameSize(*(__int64 *)v33);
    }
    else
    {
      v26 = *(_QWORD *)v33;
    }
    if ( v10 + 7 >= v10 )
      v10 = (v10 + 7) & 0xFFFFFFF8;
LABEL_53:
    v13 = 1;
LABEL_54:
    v14 = v34;
LABEL_32:
    WmipUnreferenceEntry(&WmipISChunkInfo, v26);
    v11 = v32;
    v15 = (char *)v35 + 8;
    v25 = v39-- == 1;
    v12 = v36;
    v35 = (char *)v35 + 8;
  }
  while ( !v25 );
  v28 = v43;
  v7 = Object;
  if ( v10 )
  {
    if ( v13 )
    {
      if ( v10 <= a5 )
        v10 = a5 + 64;
      v31 = v40;
      *v43 = 56;
      v28[11] = 32;
      v28[12] = v10;
      *v31 = 56;
    }
    else
    {
      *v40 = v10;
    }
    v9 = 0;
  }
LABEL_37:
  if ( P != v46 && P )
    ExFreePoolWithTag(P, 0);
LABEL_40:
  ObfDereferenceObject(v7);
  return (unsigned int)v9;
}
