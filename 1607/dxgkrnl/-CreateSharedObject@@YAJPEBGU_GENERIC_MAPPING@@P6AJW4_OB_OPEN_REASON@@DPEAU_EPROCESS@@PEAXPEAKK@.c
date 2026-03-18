/*
 * XREFs of ?CreateSharedObject@@YAJPEBGU_GENERIC_MAPPING@@P6AJW4_OB_OPEN_REASON@@DPEAU_EPROCESS@@PEAXPEAKK@ZP6AX34_K7@ZP6AX4@ZPEAPEAU_OBJECT_TYPE@@@Z @ 0x1C00FB5D8
 * Callers:
 *     CreateDxgkSharedObjectTypes @ 0x1C00FB4E0 (CreateDxgkSharedObjectTypes.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 */

__int64 __fastcall CreateSharedObject(
        PCWSTR SourceString,
        __m128i *a2,
        int (__high *a3)(enum _OB_OPEN_REASON, char, struct _EPROCESS *, void *, unsigned int *, unsigned int),
        void (*a4)(struct _EPROCESS *, void *, unsigned __int64, unsigned __int64),
        void (*a5)(void *),
        struct _OBJECT_TYPE **a6)
{
  __m128i v6; // xmm6
  struct _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-99h] BYREF
  _QWORD v12[16]; // [rsp+38h] [rbp-89h] BYREF

  v6 = *a2;
  memset(v12, 0, 0x78uLL);
  HIDWORD(v12[0]) = 0;
  HIDWORD(v12[5]) = 0;
  BYTE2(v12[0]) = BYTE2(v12[0]) & 0x80 | 0x1D;
  *(__m128i *)((char *)&v12[1] + 4) = v6;
  v12[6] = 0LL;
  memset(&v12[10], 0, 32);
  LOWORD(v12[0]) = 120;
  HIDWORD(v12[3]) = _mm_srli_si128(v6, 8).m128i_i32[1];
  LODWORD(v12[1]) = 256;
  *(_QWORD *)((char *)&v12[4] + 4) = 1LL;
  v12[7] = a3;
  v12[8] = a4;
  v12[9] = a5;
  RtlInitUnicodeString(&DestinationString, SourceString);
  return ObCreateObjectType(&DestinationString, v12, 0LL, a6);
}
