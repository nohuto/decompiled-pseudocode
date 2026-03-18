/*
 * XREFs of ?Win32kLeakTrackingLiveDumpCallback@@YAJPEAXP6AJ0PEBU_GUID@@0K@ZK_K3330@Z @ 0x1C01F6A00
 * Callers:
 *     <none>
 * Callees:
 *     ?Empty@CLeakTrackingAllocator@NSInstrumentation@@QEAA_NXZ @ 0x1C0130D98 (-Empty@CLeakTrackingAllocator@NSInstrumentation@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ?Win32kAddLeakTrackingSecondaryData@@YAJPEAXP6AJ0PEBU_GUID@@0K@Z1@Z @ 0x1C01F68FC (-Win32kAddLeakTrackingSecondaryData@@YAJPEAXP6AJ0PEBU_GUID@@0K@Z1@Z.c)
 */

__int64 __fastcall Win32kLeakTrackingLiveDumpCallback(
        void *a1,
        int (*a2)(void *, const struct _GUID *, void *, unsigned int),
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned int *a8)
{
  __int64 result; // rax
  NSInstrumentation::CLeakTrackingAllocator *v11; // rcx
  int v12; // r9d
  unsigned int v13; // ebx
  int v14; // eax
  _OWORD v15[3]; // [rsp+30h] [rbp-48h] BYREF

  if ( !a8 )
    return 0LL;
  result = ((__int64 (__fastcall *)(void *, void *, _QWORD, _QWORD))a2)(a1, &unk_1C02EBB40, *(_QWORD *)a8, a8[2]);
  v12 = result;
  if ( (int)result >= 0 )
  {
    if ( gpLeakTrackingAllocator && !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::Empty(v11) )
    {
      v13 = 0;
      v15[0] = xmmword_1C02EBB30;
      v15[1] = xmmword_1C02EBB20;
      v15[2] = xmmword_1C02EBB10;
      do
      {
        if ( v12 < 0 )
          break;
        v14 = Win32kAddLeakTrackingSecondaryData(a1, a2, (const struct _GUID *)&v15[v13++]);
        v12 = v14;
      }
      while ( v13 < 3 );
    }
    return (unsigned int)v12;
  }
  return result;
}
