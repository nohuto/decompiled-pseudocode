/*
 * XREFs of ACPIInitStartDevice @ 0x1C0009FCC
 * Callers:
 *     ACPIEcStartDevice @ 0x1C004CC70 (ACPIEcStartDevice.c)
 *     ACPIBusIrpStartDevice @ 0x1C0082A70 (ACPIBusIrpStartDevice.c)
 *     ACPIFilterIrpStartDevice @ 0x1C0082BE0 (ACPIFilterIrpStartDevice.c)
 *     ACPICMButtonStart @ 0x1C0090A9C (ACPICMButtonStart.c)
 *     ACPIInternalDeviceClockIrpStartDevice @ 0x1C0090B70 (ACPIInternalDeviceClockIrpStartDevice.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0001210 (AMLIEvalNameSpaceObject.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C0005F04 (WPP_RECORDER_SF_Dqss.c)
 *     ACPIDeviceInternalDeviceRequest @ 0x1C000A33C (ACPIDeviceInternalDeviceRequest.c)
 *     WPP_RECORDER_SF_qss @ 0x1C000E3F0 (WPP_RECORDER_SF_qss.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0012A70 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C00135A4 (ACPIThermalAcquireCoolingInterfaces.c)
 *     AMLIGetNamedChild @ 0x1C0013EA0 (AMLIGetNamedChild.c)
 *     FreeDataBuffs @ 0x1C001B580 (FreeDataBuffs.c)
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002BE80 (memmove.c)
 *     PnpCmResourcesToBiosResources @ 0x1C00841D8 (PnpCmResourcesToBiosResources.c)
 */

__int64 __fastcall ACPIInitStartDevice(
        ULONG_PTR a1,
        __int64 a2,
        void (__fastcall *a3)(_QWORD *, __int64, _QWORD),
        __int64 a4,
        __int64 a5)
{
  int v5; // edi
  int v6; // r13d
  _QWORD *DeviceExtension; // rax
  __int64 *v9; // r15
  __int64 v10; // r14
  _QWORD *v11; // rbx
  _DWORD *v12; // r13
  _DWORD *v13; // rsi
  const char *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // edx
  __int64 *v18; // rax
  __int64 v19; // rdx
  unsigned int v20; // ebx
  int v22; // esi
  unsigned int v23; // esi
  PVOID v24; // rax
  void *v25; // r12
  char v26; // si
  _OWORD *v27; // rax
  _QWORD *v28; // r13
  KIRQL v29; // al
  void *v30; // rcx
  KIRQL v31; // di
  void *v32; // rcx
  unsigned int v33; // r8d
  unsigned int v34; // edx
  _BYTE *v35; // rcx
  size_t v36; // r15
  PVOID PoolWithTag; // rax
  PVOID v38; // r14
  __int64 v39; // rax
  __int64 *v40; // rdx
  __int64 *v41; // rcx
  __int64 v42; // rax
  __int64 *v43; // rdx
  __int64 *v44; // rcx
  void *v45; // rcx
  __int64 v46; // rcx
  int v47; // edx
  __int64 *v48; // rax
  __int64 v49; // rax
  int v50; // edx
  __int64 *v51; // rcx
  __int64 v52; // rax
  int v53; // edx
  __int64 *v54; // rcx
  __int64 v55; // rax
  int v56; // edx
  __int64 *v57; // rcx
  __int64 v58; // rax
  const char *v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // [rsp+30h] [rbp-50h]
  __int64 v62; // [rsp+38h] [rbp-48h]
  void *v63; // [rsp+50h] [rbp-30h]
  __int128 v64; // [rsp+58h] [rbp-28h] BYREF
  __int128 v65; // [rsp+68h] [rbp-18h]
  void *Src; // [rsp+78h] [rbp-8h]
  size_t Size; // [rsp+C8h] [rbp+48h]
  size_t Sizea; // [rsp+C8h] [rbp+48h]

  v5 = a4;
  v6 = (int)a3;
  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(a1);
  v9 = 0LL;
  v10 = 0LL;
  v11 = DeviceExtension;
  Size = DeviceExtension[89];
  if ( a2 )
  {
    v12 = *(_DWORD **)(a2 + 8);
    v13 = *(_DWORD **)(a2 + 16);
    v63 = v12;
    if ( !v12 || *v12 != 1 )
      goto LABEL_11;
    v14 = (const char *)qword_1C002C340;
    if ( v13 && *v13 == 1 && (DeviceExtension[114] & 0x100000000LL) != 0 )
    {
      v33 = v13[4];
      v34 = 0;
      if ( v33 )
      {
        v35 = v13 + 5;
        while ( *v35 != 2 || (v35[2] & 0x20) == 0 )
        {
          ++v34;
          v35 += 20;
          if ( v34 >= v33 )
            goto LABEL_45;
        }
        v36 = 20 * (v33 + 1);
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v36, 0x53706341u);
        v38 = PoolWithTag;
        if ( PoolWithTag )
        {
          memmove(PoolWithTag, v13, v36);
          v45 = (void *)v11[79];
          if ( v45 )
            ExFreePoolWithTag(v45, 0);
          v11[79] = v38;
        }
        else
        {
          v39 = v11[1];
          v40 = qword_1C002C340;
          v41 = qword_1C002C340;
          if ( (v39 & 0x200000000000LL) != 0 )
          {
            v40 = (__int64 *)v11[70];
            if ( (v39 & 0x400000000000LL) != 0 )
              v41 = (__int64 *)v11[71];
          }
          v62 = (__int64)v40;
          LOBYTE(v40) = 2;
          WPP_RECORDER_SF_Lqss(
            WPP_GLOBAL_Control->DeviceExtension,
            (_DWORD)v40,
            1,
            21,
            (__int64)&WPP_37e0335c93fc3714a3de242c1cbb5d62_Traceguids,
            v36,
            (char)v11,
            v62,
            (__int64)v41);
        }
      }
      else
      {
LABEL_45:
        v42 = DeviceExtension[1];
        v43 = qword_1C002C340;
        v44 = qword_1C002C340;
        if ( (v42 & 0x200000000000LL) != 0 )
        {
          v43 = (__int64 *)v11[70];
          if ( (v42 & 0x400000000000LL) != 0 )
            v44 = (__int64 *)v11[71];
        }
        v61 = (__int64)v43;
        LOBYTE(v43) = 2;
        WPP_RECORDER_SF_qss(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v43,
          17,
          20,
          (__int64)&WPP_37e0335c93fc3714a3de242c1cbb5d62_Traceguids,
          (char)v11,
          v61,
          (__int64)v44);
        _InterlockedAnd64(v11 + 1, 0xFFFFFFFFFFFEFFFFuLL);
        _InterlockedAnd64(v11 + 114, 0xFFFFFFFEFFFFFFFFuLL);
        _InterlockedAnd64(v11 + 114, 0xFFFFFFFFFFEFFFFFuLL);
      }
    }
    v9 = (__int64 *)AMLIGetNamedChild(Size, 1397900127LL);
    v15 = AMLIGetNamedChild(Size, 1397904223LL);
    v10 = v15;
    if ( v9 && v15 )
    {
      v22 = AMLIEvalNameSpaceObject(v9, &v64, 0, 0LL);
      if ( v22 < 0 )
      {
        v46 = v11[1];
        v47 = 0;
        v48 = qword_1C002C340;
        if ( (v46 & 0x200000000000LL) != 0 )
        {
          v14 = (const char *)v11[70];
          v47 = 0;
          if ( (v46 & 0x400000000000LL) != 0 )
            v48 = (__int64 *)v11[71];
        }
        LOBYTE(v47) = 2;
        WPP_RECORDER_SF_Lqss(
          WPP_GLOBAL_Control->DeviceExtension,
          v47,
          1,
          23,
          (__int64)&WPP_37e0335c93fc3714a3de242c1cbb5d62_Traceguids,
          v22,
          (char)v11,
          (__int64)v14,
          (__int64)v48);
        goto LABEL_75;
      }
      if ( WORD1(v64) != 3 || !DWORD2(v65) || !Src )
      {
        v58 = v11[1];
        v59 = (const char *)qword_1C002C340;
        if ( (v58 & 0x200000000000LL) != 0 )
        {
          v14 = (const char *)v11[70];
          if ( (v58 & 0x400000000000LL) != 0 )
            v59 = (const char *)v11[71];
        }
        WPP_RECORDER_SF_Dqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          0x18u,
          (__int64)&WPP_37e0335c93fc3714a3de242c1cbb5d62_Traceguids,
          SBYTE2(v64),
          (char)v11,
          v14,
          v59);
        dword_1C0074698 = 0;
        byte_1C007469C = 0;
        FreeDataBuffs(&v64, 1LL);
        v22 = -1073741823;
        goto LABEL_75;
      }
      v23 = 20 * (v12[4] + 1);
      Sizea = v23;
      v24 = ExAllocatePoolWithTag(PagedPool, v23, 0x53706341u);
      v25 = v24;
      if ( v24 )
      {
        memmove(v24, v12, v23);
        v26 = BYTE8(v65) + 40;
        v27 = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(DWORD2(v65) + 40), 0x4F706341u);
        v28 = v27;
        if ( v27 )
        {
          *v27 = v64;
          v27[1] = v65;
          *((_QWORD *)v27 + 4) = (char *)v27 + 40;
          memmove((char *)v27 + 40, Src, DWORD2(v65));
          dword_1C0074698 = 0;
          byte_1C007469C = 0;
          FreeDataBuffs(&v64, 1LL);
          v22 = PnpCmResourcesToBiosResources(v11, v25, v28[4], *((unsigned int *)v28 + 6));
          if ( v22 < 0 )
          {
            v55 = v11[1];
            v56 = 0;
            v57 = qword_1C002C340;
            if ( (v55 & 0x200000000000LL) != 0 )
            {
              v14 = (const char *)v11[70];
              v56 = 0;
              if ( (v55 & 0x400000000000LL) != 0 )
                v57 = (__int64 *)v11[71];
            }
            LOBYTE(v56) = 2;
            WPP_RECORDER_SF_Lqss(
              WPP_GLOBAL_Control->DeviceExtension,
              v56,
              1,
              27,
              (__int64)&WPP_37e0335c93fc3714a3de242c1cbb5d62_Traceguids,
              v22,
              (char)v11,
              (__int64)v14,
              (__int64)v57);
            ExFreePoolWithTag(v25, 0);
            ExFreePoolWithTag(v28, 0);
            goto LABEL_75;
          }
          memmove(v25, v63, Sizea);
          v29 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
          v30 = (void *)v11[80];
          v31 = v29;
          if ( v30 )
            ExFreePoolWithTag(v30, 0);
          v11[80] = v28;
          KeReleaseSpinLock(&AcpiDeviceTreeLock, v31);
          v32 = (void *)v11[78];
          if ( v32 )
            ExFreePoolWithTag(v32, 0);
          v11[78] = v25;
          goto LABEL_10;
        }
        v52 = v11[1];
        v53 = 0;
        v54 = qword_1C002C340;
        if ( (v52 & 0x200000000000LL) != 0 )
        {
          v14 = (const char *)v11[70];
          v53 = 0;
          if ( (v52 & 0x400000000000LL) != 0 )
            v54 = (__int64 *)v11[71];
        }
        LOBYTE(v53) = 2;
        WPP_RECORDER_SF_Lqss(
          WPP_GLOBAL_Control->DeviceExtension,
          v53,
          1,
          26,
          (__int64)&WPP_37e0335c93fc3714a3de242c1cbb5d62_Traceguids,
          v26,
          (char)v11,
          (__int64)v14,
          (__int64)v54);
        dword_1C0074698 = 0;
        byte_1C007469C = 0;
        FreeDataBuffs(&v64, 1LL);
        ExFreePoolWithTag(v25, 0);
      }
      else
      {
        v49 = v11[1];
        v50 = 0;
        v51 = qword_1C002C340;
        if ( (v49 & 0x200000000000LL) != 0 )
        {
          v14 = (const char *)v11[70];
          v50 = 0;
          if ( (v49 & 0x400000000000LL) != 0 )
            v51 = (__int64 *)v11[71];
        }
        LOBYTE(v50) = 2;
        WPP_RECORDER_SF_Lqss(
          WPP_GLOBAL_Control->DeviceExtension,
          v50,
          1,
          25,
          (__int64)&WPP_37e0335c93fc3714a3de242c1cbb5d62_Traceguids,
          v23,
          (char)v11,
          (__int64)v14,
          (__int64)v51);
        dword_1C0074698 = 0;
        byte_1C007469C = 0;
        FreeDataBuffs(&v64, 1LL);
      }
      v22 = -1073741670;
LABEL_75:
      a3(v11, a4, (unsigned int)v22);
      if ( v9 )
        AMLIDereferenceHandleEx(v9, v60);
      if ( v10 )
        AMLIDereferenceHandleEx(v10, v60);
      return (unsigned int)v22;
    }
    v16 = v11[1];
    v17 = 0;
    v18 = qword_1C002C340;
    if ( (v16 & 0x200000000000LL) != 0 )
    {
      v14 = (const char *)v11[70];
      v17 = 0;
      if ( (v16 & 0x400000000000LL) != 0 )
        v18 = (__int64 *)v11[71];
    }
    LOBYTE(v17) = 2;
    WPP_RECORDER_SF_qss(
      WPP_GLOBAL_Control->DeviceExtension,
      v17,
      1,
      22,
      (__int64)&WPP_37e0335c93fc3714a3de242c1cbb5d62_Traceguids,
      (char)v11,
      (__int64)v14,
      (__int64)v18);
LABEL_10:
    v5 = a4;
LABEL_11:
    v6 = (int)a3;
  }
  ACPIThermalAcquireCoolingInterfaces(v11);
  *(_BYTE *)(*(_QWORD *)(a5 + 184) + 3LL) |= 1u;
  if ( (v11[114] & 0xC0000LL) == 0xC0000 && *((_DWORD *)v11 + 84) == 1 )
  {
    v22 = 0;
    goto LABEL_75;
  }
  v20 = ACPIDeviceInternalDeviceRequest((_DWORD)v11, 1, v6, v5, 4);
  if ( v20 == -1073741802 )
    v20 = 259;
  if ( v9 )
    AMLIDereferenceHandleEx(v9, v19);
  if ( v10 )
    AMLIDereferenceHandleEx(v10, v19);
  return v20;
}
