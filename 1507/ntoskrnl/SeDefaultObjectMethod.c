/*
 * XREFs of SeDefaultObjectMethod @ 0x140486370
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ObDereferenceSecurityDescriptor @ 0x140486190 (ObDereferenceSecurityDescriptor.c)
 *     ObLogSecurityDescriptor @ 0x140486480 (ObLogSecurityDescriptor.c)
 *     ObSetSecurityDescriptorInfo @ 0x1404CF3B0 (ObSetSecurityDescriptorInfo.c)
 */

__int64 __fastcall SeDefaultObjectMethod(
        void *a1,
        int a2,
        DWORD *a3,
        void *a4,
        __int64 a5,
        __int64 *a6,
        POOL_TYPE a7,
        GENERIC_MAPPING *a8)
{
  int v10; // edx
  int v11; // edx
  int v12; // esi
  unsigned int v13; // edx
  __int64 v15; // rcx
  _QWORD v16[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( !a2 )
    return ObSetSecurityDescriptorInfo(a1, a3, a4, a7, a8);
  v10 = a2 - 1;
  if ( !v10 )
    return ObQuerySecurityDescriptorInfo(a1, a3, a4, a5);
  v11 = v10 - 1;
  if ( v11 )
  {
    if ( v11 != 1 )
      KeBugCheckEx(0x29u, 0LL, 0xFFFFFFFFC000000DuLL, 0LL, 0LL);
    if ( a4 )
    {
      v12 = ObLogSecurityDescriptor(a4, v16, 16LL);
      if ( v12 >= 0 )
      {
        ExFreePoolWithTag(a4, 0);
        if ( v16[0] )
          *((_QWORD *)a1 - 1) = v16[0] + 15LL;
        else
          *((_QWORD *)a1 - 1) = 0LL;
      }
      return (unsigned int)v12;
    }
    else
    {
      v13 = 0;
      *((_QWORD *)a1 - 1) = 0LL;
    }
    return v13;
  }
  else
  {
    v15 = *a6;
    *a6 = 0LL;
    ObDereferenceSecurityDescriptor(v15 & 0xFFFFFFFFFFFFFFF0uLL, (v15 & 0xF) + 1, (__int64)a3, (__int64)a4);
    return 0LL;
  }
}
