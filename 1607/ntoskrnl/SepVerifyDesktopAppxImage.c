/*
 * XREFs of SepVerifyDesktopAppxImage @ 0x140219AD8
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x14007BFB8 (SepDesktopAppxSubProcessToken.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     SeGetTrustLabelAce @ 0x14008D1D0 (SeGetTrustLabelAce.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     SepVerifyDesktopAppxPackageName @ 0x140219C8C (SepVerifyDesktopAppxPackageName.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlCreateSecurityDescriptor @ 0x140412D90 (RtlCreateSecurityDescriptor.c)
 *     PsReferenceProcessFilePointer @ 0x14046DE90 (PsReferenceProcessFilePointer.c)
 *     ObQuerySecurityObject @ 0x140504284 (ObQuerySecurityObject.c)
 */

__int64 __fastcall SepVerifyDesktopAppxImage(__int64 a1, int a2, char a3, _BYTE *a4)
{
  _BYTE *v5; // rdi
  NTSTATUS v7; // ebx
  int SecurityObject; // eax
  _BYTE *PoolWithTag; // rax
  _DWORD NumberOfBytes[3]; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE SecurityDescriptor[512]; // [rsp+40h] [rbp-C0h] BYREF

  *(_QWORD *)&NumberOfBytes[1] = 0LL;
  v5 = 0LL;
  *a4 = 0;
  v7 = PsReferenceProcessFilePointer(a1, &NumberOfBytes[1]);
  if ( v7 < 0 )
    goto LABEL_15;
  NumberOfBytes[0] = 512;
  v5 = SecurityDescriptor;
  v7 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( v7 < 0 )
    goto LABEL_15;
  SecurityObject = ObQuerySecurityObject(
                     NumberOfBytes[1],
                     132,
                     (unsigned int)SecurityDescriptor,
                     512,
                     (__int64)NumberOfBytes);
  if ( SecurityObject != -1073741789 )
    goto LABEL_8;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes[0], 0x20206553u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v7 = -1073741801;
    goto LABEL_15;
  }
  v7 = RtlCreateSecurityDescriptor(PoolWithTag, 1u);
  if ( v7 >= 0 )
  {
    SecurityObject = ObQuerySecurityObject(NumberOfBytes[1], 132, (_DWORD)v5, NumberOfBytes[0], (__int64)NumberOfBytes);
LABEL_8:
    if ( SecurityObject >= 0 )
    {
      if ( v5 )
      {
        v7 = SepVerifyDesktopAppxPackageName(a2);
        if ( v7 >= 0 && a3 == 1 )
          SeGetTrustLabelAce((__int64)v5);
      }
      else
      {
        v7 = -1073739509;
      }
    }
    else
    {
      v7 = 0;
    }
  }
LABEL_15:
  if ( *(_QWORD *)&NumberOfBytes[1] )
    ObfDereferenceObjectWithTag(*(PVOID *)&NumberOfBytes[1], 0x746C6644u);
  if ( v5 && v5 != SecurityDescriptor )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)v7;
}
