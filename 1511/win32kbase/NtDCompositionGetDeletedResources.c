/*
 * XREFs of NtDCompositionGetDeletedResources @ 0x1C0071700
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0019DA0 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

__int64 __fastcall NtDCompositionGetDeletedResources(unsigned int a1, unsigned int a2, char *a3, unsigned int *a4)
{
  unsigned int *v4; // r12
  int v8; // esi
  struct DirectComposition::CApplicationChannel *v9; // r14
  unsigned int v10; // r15d
  unsigned int v11; // edi
  unsigned __int64 v12; // rcx
  _BYTE *v13; // r12
  __int64 v14; // rax
  unsigned int v15; // ecx
  __int64 v16; // rdi
  size_t v17; // r8
  unsigned int v19; // [rsp+20h] [rbp-A8h]
  struct DirectComposition::CApplicationChannel *v20; // [rsp+28h] [rbp-A0h] BYREF
  unsigned int v21; // [rsp+30h] [rbp-98h]
  unsigned int *v22; // [rsp+38h] [rbp-90h]
  _BYTE Src[64]; // [rsp+40h] [rbp-88h] BYREF

  v4 = a4;
  v22 = a4;
  v8 = 0;
  v20 = 0LL;
  memset(Src, 0, sizeof(Src));
  if ( a2 - 1 > 7 || !a3 || !v4 )
    v8 = -1073741811;
  if ( v8 >= 0 )
  {
    v8 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v20);
    v9 = v20;
    if ( v8 >= 0 )
    {
      v10 = a2;
      if ( *((_DWORD *)v20 + 131) < a2 )
        v10 = *((_DWORD *)v20 + 131);
      v11 = v10;
      v19 = v10;
      v21 = v10;
      if ( v10 )
      {
        v12 = *((_QWORD *)v20 + 63);
        v13 = Src;
        do
        {
          v14 = *((unsigned int *)v9 + 130);
          v15 = v12 - v14;
          if ( v10 < v15 )
            v15 = v10;
          v16 = v15;
          memmove(v13, (const void *)(*((_QWORD *)v9 + 60) + v14 * *((_QWORD *)v9 + 64)), v15 * *((_QWORD *)v9 + 64));
          v12 = *((_QWORD *)v9 + 63);
          *((_DWORD *)v9 + 130) = (unsigned int)(v16 + *((_DWORD *)v9 + 130)) % v12;
          *((_DWORD *)v9 + 131) -= v16;
          v13 += 8 * v16;
          v10 -= v16;
        }
        while ( v10 );
        v4 = v22;
        v11 = v19;
      }
      _guard_dispatch_icall_fptr();
      v17 = 8LL * a2;
      if ( (unsigned __int64)&a3[v17] > MmUserProbeAddress || &a3[v17] <= a3 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(a3, Src, v17);
      if ( v4 + 1 < v4 || (unsigned __int64)(v4 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *v4 = v11;
    }
  }
  return (unsigned int)v8;
}
