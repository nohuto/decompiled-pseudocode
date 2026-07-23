/*
 * XREFs of PspInitializeProtectedProcessParameters @ 0x1407B6040
 * Callers:
 *     PspInitPhase2 @ 0x1407B5F0C (PspInitPhase2.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 PspInitializeProtectedProcessParameters()
{
  wchar_t *PoolWithTag; // rax
  wchar_t *v1; // rbx
  char *v2; // rbx
  wchar_t *Buffer; // [rsp+28h] [rbp-10h]

  PsProtectedCurrentDirectory = NtSystemRoot;
  PsProtectedEnvironment.Length = 2 * (_mm_cvtsi128_si32((__m128i)NtSystemRoot) + 42);
  Buffer = NtSystemRoot.Buffer;
  PsProtectedEnvironment.MaximumLength = PsProtectedEnvironment.Length + 2;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(
                             PagedPool,
                             (unsigned __int16)(PsProtectedEnvironment.Length + 2),
                             0x6C537350u);
  PsProtectedEnvironment.Buffer = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *(_QWORD *)PoolWithTag = *(_QWORD *)L"Path=";
  PoolWithTag[4] = aPath[4];
  v1 = PoolWithTag + 5;
  memmove(PoolWithTag + 5, NtSystemRoot.Buffer, NtSystemRoot.Length);
  v2 = (char *)v1 + NtSystemRoot.Length;
  *(_OWORD *)v2 = *(_OWORD *)L"\\System32";
  *((_WORD *)v2 + 8) = aSystem32_0[8];
  v2 += 18;
  *(_WORD *)v2 = 0;
  v2 += 2;
  *(_OWORD *)v2 = *(_OWORD *)L"SystemDrive=";
  *((_QWORD *)v2 + 2) = *(_QWORD *)L"ive=";
  *((_DWORD *)v2 + 6) = *(_DWORD *)Buffer;
  v2 += 28;
  *(_WORD *)v2 = 0;
  v2 += 2;
  *(_OWORD *)v2 = *(_OWORD *)L"SystemRoot=";
  *((_DWORD *)v2 + 4) = *(_DWORD *)L"ot=";
  *((_WORD *)v2 + 10) = aSystemroot_8[10];
  memmove(v2 + 22, NtSystemRoot.Buffer, NtSystemRoot.Length);
  *(_DWORD *)&v2[NtSystemRoot.Length + 22] = 0;
  return 0LL;
}
