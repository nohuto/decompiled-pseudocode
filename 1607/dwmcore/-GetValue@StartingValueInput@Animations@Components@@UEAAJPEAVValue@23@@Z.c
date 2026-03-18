/*
 * XREFs of ?GetValue@StartingValueInput@Animations@Components@@UEAAJPEAVValue@23@@Z @ 0x180019380
 * Callers:
 *     ?Calculate@Sequence@Animations@Components@@QEAAXXZ @ 0x180085810 (-Calculate@Sequence@Animations@Components@@QEAAXXZ.c)
 * Callees:
 *     ?GetSampledStartingValue@CKeyframeAnimation@@UEAAJPEAM@Z @ 0x180019420 (-GetSampledStartingValue@CKeyframeAnimation@@UEAAJPEAM@Z.c)
 *     ?Normalize@Quaternion@Animations@Components@@QEAAXXZ @ 0x1800B7BB4 (-Normalize@Quaternion@Animations@Components@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Components::Animations::StartingValueInput::GetValue(
        Components::Animations::StartingValueInput *this,
        struct Components::Animations::Value *a2)
{
  CKeyframeAnimation *v4; // rcx
  __int64 (__fastcall *v5)(CKeyframeAnimation *__hidden, float *); // rax
  __int64 result; // rax
  float v7; // xmm0_4
  double v8; // xmm1_8
  float v9; // xmm0_4
  double v10; // xmm1_8
  __int64 k; // rax
  __int64 j; // rax
  double v13; // xmm1_8
  double v14; // xmm0_8
  __int64 i; // rax
  _QWORD v16[2]; // [rsp+20h] [rbp-30h]
  _QWORD v17[2]; // [rsp+30h] [rbp-20h] BYREF

  v4 = (CKeyframeAnimation *)*((_QWORD *)this + 2);
  v5 = *(__int64 (__fastcall **)(CKeyframeAnimation *__hidden, float *))(*(_QWORD *)v4 + 56LL);
  if ( v5 == CKeyframeAnimation::GetSampledStartingValue )
    result = CKeyframeAnimation::GetSampledStartingValue(v4, (float *)v17);
  else
    result = v5(v4, (float *)v17);
  if ( (int)result >= 0 )
  {
    switch ( *((_DWORD *)this + 3) )
    {
      case 0x12:
        v7 = *(float *)v17;
        *((_QWORD *)a2 + 1) = 0LL;
        *(double *)a2 = v7;
        break;
      case 0x23:
        v16[0] = v17[0];
        for ( i = 0LL; i < 2; ++i )
          *((double *)a2 + i) = *((float *)v16 + i);
        break;
      case 0x34:
        v13 = *((float *)v17 + 1);
        *(double *)a2 = *(float *)v17;
        v14 = *(float *)&v17[1];
        *((double *)a2 + 1) = v13;
        *((double *)a2 + 2) = v14;
LABEL_7:
        *((_QWORD *)a2 + 3) = 0LL;
        return 0LL;
      default:
        switch ( *((_DWORD *)this + 3) )
        {
          case 'E':
            for ( j = 0LL; j < 4; ++j )
              *((double *)a2 + j) = *((float *)v17 + j);
            break;
          case 'F':
            for ( k = 0LL; k < 4; ++k )
              *((double *)a2 + k) = *((float *)v17 + k);
            break;
          case 'G':
            Components::Animations::Quaternion::Normalize((Components::Animations::Quaternion *)v17);
            v8 = *((float *)v17 + 1);
            *(double *)a2 = *(float *)v17;
            v9 = *(float *)&v17[1];
            *((double *)a2 + 1) = v8;
            v10 = *((float *)&v17[1] + 1);
            *((double *)a2 + 2) = v9;
            *((double *)a2 + 3) = v10;
            break;
        }
        return 0LL;
    }
    *((_QWORD *)a2 + 2) = 0LL;
    goto LABEL_7;
  }
  return result;
}
