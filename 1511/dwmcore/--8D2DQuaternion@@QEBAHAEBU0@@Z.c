/*
 * XREFs of ??8D2DQuaternion@@QEBAHAEBU0@@Z @ 0x18015733C
 * Callers:
 *     ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x180136498 (--8CExpressionValue@@QEBA_NAEBV0@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall D2DQuaternion::operator==(float *a1, float *a2)
{
  return *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3];
}
