/*
 * XREFs of UsbhGetNextMsOs20Descriptor @ 0x1C004008C
 * Callers:
 *     UsbhParseAndInstallRegistryValueDescriptors @ 0x1C004038C (UsbhParseAndInstallRegistryValueDescriptors.c)
 *     UsbhValidateMsOs20ConfigurationSubset @ 0x1C0052F50 (UsbhValidateMsOs20ConfigurationSubset.c)
 *     UsbhValidateMsOs20DescriptorSet @ 0x1C00530A0 (UsbhValidateMsOs20DescriptorSet.c)
 *     UsbhValidateMsOs20FunctionSubset @ 0x1C00532A0 (UsbhValidateMsOs20FunctionSubset.c)
 * Callees:
 *     <none>
 */

char __fastcall UsbhGetNextMsOs20Descriptor(unsigned __int64 a1, unsigned __int16 **a2)
{
  unsigned __int16 *v2; // rax
  char v4; // r8
  unsigned __int16 v5; // cx
  unsigned __int16 v7; // cx
  unsigned __int16 *v8; // rcx

  v2 = *a2;
  v4 = 1;
  v5 = (*a2)[1];
  if ( v5 == 2 || v5 == 1 )
  {
    if ( *v2 < 8u || (v7 = v2[3], v7 < 0xCu) )
    {
      *a2 = 0LL;
      return 0;
    }
  }
  else
  {
    v7 = *v2;
    if ( *v2 < 4u )
    {
LABEL_12:
      v4 = 0;
      goto LABEL_13;
    }
  }
  v8 = (unsigned __int16 *)((char *)v2 + v7);
  if ( v8 != (unsigned __int16 *)a1 )
  {
    if ( (unsigned __int64)v8 <= a1 && (unsigned __int64)(v8 + 2) <= a1 && (unsigned __int64)v8 + *v8 <= a1 )
    {
      *a2 = v8;
      return v4;
    }
    goto LABEL_12;
  }
LABEL_13:
  *a2 = 0LL;
  return v4;
}
