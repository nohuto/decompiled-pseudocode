/*
 * XREFs of ACPIBuildDockExtension @ 0x1C003482C
 * Callers:
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C000B730 (ACPIBuildProcessDevicePhaseEjd.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C0003DB8 (RtlStringCchPrintfA.c)
 *     ACPIAmliBuildObjectPathname @ 0x1C0016898 (ACPIAmliBuildObjectPathname.c)
 *     ACPIBuildDeviceExtension @ 0x1C001700C (ACPIBuildDeviceExtension.c)
 */

__int64 __fastcall ACPIBuildDockExtension(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  char *PoolWithTag; // rax
  char *v5; // rsi
  int v6; // edi
  _QWORD *v7; // r15
  unsigned __int64 v8; // rax
  PVOID P; // [rsp+48h] [rbp+10h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = 0LL;
  P = 0LL;
  result = ACPIBuildDeviceExtension(0LL, RootDeviceExtension, &v10);
  if ( (int)result >= 0 )
  {
    v3 = v10;
    if ( v10 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x15uLL, 0x53706341u);
      v5 = PoolWithTag;
      if ( PoolWithTag )
      {
        RtlStringCchPrintfA(PoolWithTag, 0x15uLL, "ACPI\\DockDevice");
        v7 = (_QWORD *)(v3 + 552);
        *(_QWORD *)(v3 + 552) = v5;
        v6 = ACPIAmliBuildObjectPathname(a1, &P, 0);
        if ( v6 >= 0 )
        {
          v8 = 0x209E00000020008LL;
          *(_QWORD *)(v3 + 560) = P;
          *(_QWORD *)(v3 + 176) = *(_QWORD *)(*a1 + 96);
          *(_DWORD *)(v3 + 184) = 4;
          *(_DWORD *)(v3 + 192) = 0;
LABEL_11:
          _InterlockedOr64((volatile signed __int64 *)v3, v8);
          return (unsigned int)v6;
        }
        if ( P )
        {
          _InterlockedAnd64((volatile signed __int64 *)v3, 0xFFFF5FFFFFFFFFFFuLL);
          ExFreePoolWithTag(P, 0);
          v3 = v10;
          *(_QWORD *)(v10 + 560) = 0LL;
        }
        _InterlockedAnd64((volatile signed __int64 *)v3, 0xFFFF5FFFFFFFFFFFuLL);
        ExFreePoolWithTag(v5, 0);
        *v7 = 0LL;
        v3 = v10;
      }
      else
      {
        v6 = -1073741670;
      }
      v8 = 0x2000000000000LL;
      goto LABEL_11;
    }
  }
  return result;
}
