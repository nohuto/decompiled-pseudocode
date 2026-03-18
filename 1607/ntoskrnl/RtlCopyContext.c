/*
 * XREFs of RtlCopyContext @ 0x14068C174
 * Callers:
 *     PspGetSetContextInternal @ 0x140518130 (PspGetSetContextInternal.c)
 *     PspWow64GetContextThread @ 0x140518BB8 (PspWow64GetContextThread.c)
 *     PspWow64SetContextThread @ 0x140518F20 (PspWow64SetContextThread.c)
 *     PspSetContextState @ 0x140682DE4 (PspSetContextState.c)
 * Callees:
 *     RtlpCopyXStateChunk @ 0x1400A85A0 (RtlpCopyXStateChunk.c)
 *     RtlpCopyLegacyContext @ 0x1400F32B4 (RtlpCopyLegacyContext.c)
 *     RtlpValidateContextFlags @ 0x1400F4A20 (RtlpValidateContextFlags.c)
 *     RtlpGetContextFlagsLocation @ 0x1400F6818 (RtlpGetContextFlagsLocation.c)
 */

__int64 __fastcall RtlCopyContext(__int64 a1, int a2, __int64 a3)
{
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 result; // rax
  int v9; // r12d
  int v10; // edx
  int v11; // esi
  int v12; // esi
  unsigned int v13; // ebx
  int v14; // [rsp+30h] [rbp-38h] BYREF
  int *ContextFlagsLocation; // [rsp+38h] [rbp-30h]
  int v16; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  result = RtlpValidateContextFlags(a2, 0LL);
  if ( (int)result >= 0 )
  {
    ContextFlagsLocation = (int *)RtlpGetContextFlagsLocation(a1, a2);
    v9 = *ContextFlagsLocation;
    v11 = *(_DWORD *)RtlpGetContextFlagsLocation(a3, v10);
    result = RtlpValidateContextFlags(a2 | v11 | (unsigned int)v9, 0LL);
    if ( (int)result >= 0 )
    {
      v12 = a2 & v11;
      result = RtlpValidateContextFlags(v12, &v14);
      if ( (int)result >= 0 )
      {
        result = RtlpValidateContextFlags(v9, &v16);
        v13 = result;
        if ( (int)result >= 0 )
        {
          if ( (~v16 & v14) != 0 )
          {
            return 2147483653LL;
          }
          else
          {
            RtlpCopyLegacyContext(1, a1, v12, a3);
            *ContextFlagsLocation |= v9;
            if ( (v16 & 0xFFFFFFFE) != 0 )
            {
              if ( (v12 & 0x10000) != 0 )
              {
                v7 = a3 + 716;
                v6 = a1 + 716;
                if ( (v9 & 0x10020) != 65568 && (v12 & 0x10020) == 65568 )
                  *(_DWORD *)(a1 + 728) = 716;
              }
              else if ( (a2 & 0x100000) != 0 )
              {
                v7 = a3 + 1232;
                v6 = a1 + 1232;
              }
              else if ( (a2 & 0x200000) != 0 )
              {
                v7 = a3 + 416;
                v6 = a1 + 416;
              }
              else if ( (a2 & 0x400000) != 0 )
              {
                v7 = a3 + 912;
                v6 = a1 + 912;
              }
            }
            if ( (v14 & 2) == 0 )
              return v13;
            result = RtlpCopyXStateChunk(1, v6, v6, v7, v7);
            v13 = result;
            if ( (int)result >= 0 )
              return v13;
          }
        }
      }
    }
  }
  return result;
}
