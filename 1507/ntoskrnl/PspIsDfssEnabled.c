/*
 * XREFs of PspIsDfssEnabled @ 0x1405A5470
 * Callers:
 *     PsBootPhaseComplete @ 0x1405A4884 (PsBootPhaseComplete.c)
 * Callees:
 *     PspReadDfssConfigurationValues @ 0x14015D3D4 (PspReadDfssConfigurationValues.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     RtlQueryImageFileKeyOption @ 0x140545DF4 (RtlQueryImageFileKeyOption.c)
 */

char PspIsDfssEnabled()
{
  char v0; // di
  unsigned int v1; // esi
  NTSTATUS v2; // ebx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF
  ULONG v5; // [rsp+70h] [rbp+8h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp+10h] BYREF

  v0 = 0;
  v1 = 0;
  while ( 1 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspQuotaKeyNames[2 * v1];
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) < 0
      || (v2 = RtlQueryImageFileKeyOption(KeyHandle, L"EnableCpuQuota", 4, &v5, 4u, 0LL), ZwClose(KeyHandle), v2 < 0) )
    {
      if ( !v0 )
        return v0;
LABEL_5:
      PspReadDfssConfigurationValues();
      return v0;
    }
    if ( !v5 )
      return 0;
    ++v1;
    v0 = 1;
    if ( v1 >= 2 )
      goto LABEL_5;
  }
}
