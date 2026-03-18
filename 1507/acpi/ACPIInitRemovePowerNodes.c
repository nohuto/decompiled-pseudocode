/*
 * XREFs of ACPIInitRemovePowerNodes @ 0x1C003C4C4
 * Callers:
 *     ACPIBuildDevicePowerNodes @ 0x1C0021010 (ACPIBuildDevicePowerNodes.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1C003C0DC (ACPIInitDeleteDeviceExtension.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 */

_QWORD *__fastcall ACPIInitRemovePowerNodes(__int64 a1)
{
  unsigned int v2; // ecx
  __int64 *v3; // rax
  __int64 v4; // rdx
  __int64 **v5; // r8
  __int64 *v6; // rdx
  __int64 *v7; // r9
  _QWORD *result; // rax
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  volatile signed __int32 **v11; // rdi
  __int64 v12; // rsi
  volatile signed __int32 *v13; // rcx

  v2 = 0;
  v3 = (__int64 *)(a1 + 352);
  do
  {
    v4 = *v3;
    if ( *v3 )
    {
      v5 = *(__int64 ***)(v4 + 48);
      v6 = (__int64 *)(v4 + 40);
      v7 = (__int64 *)*v6;
      if ( *(__int64 **)(*v6 + 8) != v6 || *v5 != v6 )
        __fastfail(3u);
      *v5 = v7;
      v7[1] = (__int64)v5;
      *v3 = 0LL;
    }
    ++v2;
    ++v3;
  }
  while ( v2 <= 4 );
  result = *(_QWORD **)(a1 + 392);
  if ( result )
  {
    v9 = (_QWORD *)result[6];
    result += 5;
    v10 = *result;
    if ( *(_QWORD **)(*result + 8LL) != result || (_QWORD *)*v9 != result )
      __fastfail(3u);
    *v9 = v10;
    *(_QWORD *)(v10 + 8) = v9;
    *(_QWORD *)(a1 + 392) = 0LL;
  }
  v11 = (volatile signed __int32 **)(a1 + 400);
  v12 = 5LL;
  do
  {
    if ( *v11 )
    {
      result = (_QWORD *)AMLIDereferenceHandleEx(*v11);
      *v11 = 0LL;
    }
    ++v11;
    --v12;
  }
  while ( v12 );
  v13 = *(volatile signed __int32 **)(a1 + 440);
  if ( v13 )
  {
    result = (_QWORD *)AMLIDereferenceHandleEx(v13);
    *(_QWORD *)(a1 + 440) = 0LL;
  }
  return result;
}
